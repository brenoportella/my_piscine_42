/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:07:24 by bportell          #+#    #+#             */
/*   Updated: 2024/09/05 15:29:40 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("fibonacci 5: %d\n", ft_fibonacci(5));
	printf("fibonacci 0: %d\n", ft_fibonacci(0));
	printf("fibonacci -12: %d\n", ft_fibonacci(-12));
	printf("fibonacci 1: %d\n", ft_fibonacci(1));
	printf("fibonacci 2: %d\n", ft_fibonacci(2));
	printf("fibonacci 3: %d\n", ft_fibonacci(3));
	printf("fibonacci 15: %d\n", ft_fibonacci(15));
}*/
