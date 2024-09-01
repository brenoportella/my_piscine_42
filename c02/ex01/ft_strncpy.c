/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:59:05 by bportell          #+#    #+#             */
/*   Updated: 2024/09/01 15:50:43 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = -1;
	while (src[++i] != '\0' && i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src [] = "breno portella";
	char	dest[sizeof(src)];

	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return 0;
}*/
