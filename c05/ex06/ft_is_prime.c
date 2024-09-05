/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:32:43 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:34:48 by bportell         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	printf("2 prime? %d\n", ft_is_prime(2));
	printf("3 prime? %d\n", ft_is_prime(3));
	printf("4 prime? %d\n", ft_is_prime(4));
	printf("17 prime? %d\n", ft_is_prime(17));
	printf("51 prime? %d\n", ft_is_prime(51));
	printf("59 prime? %d\n", ft_is_prime(59));
	printf("2147483647 prime? %d\n", ft_is_prime(2147483647));
}*/
