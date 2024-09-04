/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:10:18 by bportell          #+#    #+#             */
/*   Updated: 2024/08/28 13:55:52 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;

	printf("%d\n%d\n", *a, *b);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 3;
	ft_ultimate_div_mod(&a, &b);

}*/
