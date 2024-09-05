/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:21:14 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:07:41 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("the recursive factorial is9: %d\n", ft_recursive_factorial(9));
	printf("factorial is4: %d\n", ft_recursive_factorial(4));
	printf("factorial is0: %d\n", ft_recursive_factorial(0));
	printf("factorial is-2: %d\n", ft_recursive_factorial(-2));
	printf("factorial is1: %d\n", ft_recursive_factorial(1));
	printf("factorial is12: %d\n", ft_recursive_factorial(12));
	printf("factorial is13: %d\n", ft_recursive_factorial(13));
}*/
