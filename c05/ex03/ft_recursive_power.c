/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:29:21 by bportell          #+#    #+#             */
/*   Updated: 2024/09/04 11:25:04 by bportell         ###   ########.fr       */
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
	printf("recursive power: %d\n", ft_recursive_power(2, 4));
	printf("recursive power: %d\n", ft_recursive_power(0, 0));
	printf("recursive power: %d\n", ft_recursive_power(1, 0));
	printf("recursive power: %d\n", ft_recursive_power(0, 1));
	printf("recursive power: %d\n", ft_recursive_power(1, 1));
	printf("recursive power: %d\n", ft_recursive_power(2, 0));
	printf("recursive power: %d\n", ft_recursive_power(0, 2));
}*/
