/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:47:42 by bportell          #+#    #+#             */
/*   Updated: 2024/09/04 03:13:44 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	number;

	i = 0;
	signal = 1;
	number = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * signal);
}
/*
int	main(void)
{
	char	number[] = " ---+--+1234ab567";

	printf("number is = %d\n", ft_atoi(number));
}*/
