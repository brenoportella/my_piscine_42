/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:08:04 by bportell          #+#    #+#             */
/*   Updated: 2024/09/01 20:33:50 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_alphanumeric(char p)
{
	if(!((p >= 48 && p <= 57) || (p >= 65 && p <= 90) || (p >= 97 && p <= 122)))
		return (0)
	else
		return (1)
}

char    *ft_strlowcase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 65 && str[i] <= 90)
                        str[i] = str[i]+32;
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
	
	}
}










