/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:07:24 by bportell          #+#    #+#             */
/*   Updated: 2024/09/04 10:15:52 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index == 3)
		return (2);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("fibonacci 14: %d", ft_fibonacci(5));
}*/
