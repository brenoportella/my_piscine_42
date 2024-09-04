/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:16:29 by bportell          #+#    #+#             */
/*   Updated: 2024/09/04 11:25:53 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("sqrt 144: %d\n", ft_sqrt(144));
	printf("sqrt 0: %d\n", ft_sqrt(0));
	printf("sqrt -1: %d\n", ft_sqrt(-1));
	printf("sqrt 2: %d\n", ft_sqrt(2));
	printf("sqrt 3: %d\n", ft_sqrt(3));
	printf("sqrt 4: %d\n", ft_sqrt(4));
	printf("sqrt 64: %d\n", ft_sqrt(64));
}*/
