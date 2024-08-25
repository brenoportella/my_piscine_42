/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:43:10 by bportell          #+#    #+#             */
/*   Updated: 2024/08/25 19:57:25 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;//indexinitial
	int	j;//indexfinal
	int	temporary;

	i = -1;
	j = size;
	while(++i < --j)
	{
		temporary = tab[i];
		tab[i] = tab[j];
		tab[j] = temporary;
	}
}

/*int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = 5;
	ft_rev_int_tab(tab, size);
	while (i <= size - 1)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
