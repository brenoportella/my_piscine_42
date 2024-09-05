/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:29:21 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:21:13 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("0 ^ 0: %d\n", ft_recursive_power(0, 0));
	printf("0 ^ 2: %d\n", ft_recursive_power(0, 2));
	printf("0 ^ -2: %d\n", ft_recursive_power(0, -2));
	printf("3 ^ -2: %d\n", ft_recursive_power(3, -2));	
	printf("3 ^ 0: %d\n", ft_recursive_power(3, 0));
	printf("3 ^ 2: %d\n", ft_recursive_power(3, 2));
	printf("-3 ^ -2: %d\n", ft_recursive_power(-3, -2));
	printf("-3 ^ 2: %d\n", ft_recursive_power(-3, 2));
	printf("-3 ^ 3: %d\n", ft_recursive_power(-3, 3));
	printf("-3 ^ 1: %d\n", ft_recursive_power(-3, 0));
	printf("max ^ 1: %d\n", ft_recursive_power(2147483647, 1));
	printf("min ^ 1: %d\n", ft_recursive_power(-2147483648, 1));
	printf("3 ^ 10: %d\n", ft_recursive_power(3, 10));
}*/
