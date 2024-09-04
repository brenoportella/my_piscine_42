/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:59:05 by bportell          #+#    #+#             */
/*   Updated: 2024/09/04 05:53:02 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i] != '\0' && i < n)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src [9] = "bre";
	char	dest[sizeof(src)];

	ft_strncpy(dest, src, 5);
	write (1, &src, 5);
	write (1, "\n", 1);
	printf("%s\n", dest);
	return 0;
}*/
