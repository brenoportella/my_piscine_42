/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:43:10 by bportell          #+#    #+#             */
/*   Updated: 2024/08/28 18:09:26 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	swap(int *ip, int *jp);

void	swap(int *ip, int *jp)
{
	int	temp;

	temp = *ip;
	*ip = *jp;
	*jp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = -1;
	while(++i < size - 1)
	{
		min_idx = i;
		j = i;
		while(j < size)
		{
			if(tab[j] < tab[min_idx])
				min_idx = j;
			j++;
		}
		if(min_idx != i)
			swap(&tab[min_idx], &tab[i]);
	}
}

void	print_array(int tab[], int size)
{
	int	count;

	count = - 1;
	while(++count <= size - 1)
	{
		printf("%d ", tab[count]);
	}
	printf("\n");
}
int	main(void)
{
	int	tab[] = {5, 4, 2, 3, 1};
	int	size = 5;
	
	print_array(tab, size);
	ft_sort_int_tab(tab, size);
	print_array(tab, size);
	return (0);
}
