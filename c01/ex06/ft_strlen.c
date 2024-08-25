/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:22:29 by bportell          #+#    #+#             */
/*   Updated: 2024/08/24 23:29:16 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen(char *str);

	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str[count] != '\0')
	{
		count++;
	}
	return (count);
}