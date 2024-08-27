/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:35:03 by bportell          #+#    #+#             */
/*   Updated: 2024/08/27 16:55:55 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	int myArray[10]; // Array para armazenar a combinacao
	int i;

	if (n > 0 && n < 10) // Verifica se n esta entre 1 e 9
	{
		i = 0;
		while (i < n)
		{
			myArray[i] = i; // Inicializa o array
			i++;
		}
		while (1)
		{	
			i = 0;
			while (i < n)
			{
				write(1, &myArray[i] + '0', 1); // Imprime o num atual
				i++;
			}
			if (myArray[0] == 10 - n)
			{
				break;
				write (1, ", ", 2);
			}
			i = n - 1;
			while (i >= 0 && myArray[i] == 9 - (n - 1 - i))
				i--;
	    if (i >= 0)
	    		{
		    		myArray[i]++;
				while (++i < n)
			    		myArray[i] = myArray[i - 1] + 1;
			}
		}
	}
}

int main()
{
    ft_print_combn(2);
    return 0;
}

