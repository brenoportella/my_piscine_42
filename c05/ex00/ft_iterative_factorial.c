/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:20:38 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:05:17 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("factorial is4: %d\n", ft_iterative_factorial(4));
	printf("factorial is0: %d\n", ft_iterative_factorial(0));
	printf("factorial is-2: %d\n", ft_iterative_factorial(-2));
	printf("factorial is1: %d\n", ft_iterative_factorial(1));
	printf("factorial is12: %d\n", ft_iterative_factorial(12));
	printf("factorial is13: %d\n", ft_iterative_factorial(13));
}*/
