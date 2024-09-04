/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:08:04 by bportell          #+#    #+#             */
/*   Updated: 2024/09/03 17:27:21 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_alphanumeric(char p)
{
	if (!((p >= '0' && p <= '9')
			|| (p >= 'A' && p <= 'Z')
			|| (p >= 'a' && p <= 'z')))
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = ft_strlen(str);
	ft_strlowcase(str);
	while (i >= 0)
	{
		if (!ft_alphanumeric(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
