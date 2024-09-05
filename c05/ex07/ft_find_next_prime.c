/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:02:32 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:39:11 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb <= 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("next prime 9: %d\n", ft_find_next_prime(9));
	printf("next prime 17: %d\n", ft_find_next_prime(17));
	printf("next prime max: %d\n", ft_find_next_prime(2147483647));
	printf("next prime 18: %d\n", ft_find_next_prime(18));
	printf("next prime max - 1: %d\n", ft_find_next_prime(2147483646));
	printf("next prime -52: %d\n", ft_find_next_prime(-52));
	printf("next prime min: %d\n", ft_find_next_prime(-2147483648));
}*/
