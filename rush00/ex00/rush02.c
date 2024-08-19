/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:58:34 by daniel-2          #+#    #+#             */
/*   Updated: 2024/08/18 14:51:17 by daniel-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	ft_row(int x, char s, char m, char e)
{
	int	col;

	if (x > 0)
	{
		ft_putchar(s);
		col = 1;
		while (col < x - 1)
		{
			ft_putchar(m);
			col++;
		}
		if (x > 1)
		{
			ft_putchar(e);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	row_y;

	if (y > 0)
	{
		ft_row (x, 'A', 'B', 'A');
		row_y = 1;
		while (row_y < y - 1)
		{
			ft_row (x, 'B', ' ', 'B');
			row_y++;
		}
		if (y > 1)
		{
			ft_row (x, 'C', 'B', 'C');
		}
	}
}
