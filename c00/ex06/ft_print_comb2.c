/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:51:33 by bportell          #+#    #+#             */
/*   Updated: 2024/08/21 15:11:20 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	nbrs [6];
	int		left_n;
	int		right_n;

	left_n = 0;
	while (left_n <= 98)
	{
		right_n = left_n + 1;
		while (right_n <= 99)
		{
			nbrs[0] = '0' + left_n / 10;
			nbrs[1] = '0' + left_n % 10;
			nbrs[2] = ' ';
			nbrs[3] = '0' + right_n / 10;
			nbrs[4] = '0' + right_n % 10;
			write (1, nbrs, 5);
			if (left_n != 98 || right_n != 99)
				write (1, ", ", 2);
			right_n++;
		}
		left_n++;
	}
	write (1, "\n", 1);
}
