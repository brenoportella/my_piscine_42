/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:48:58 by bportell          #+#    #+#             */
/*   Updated: 2024/09/02 23:49:08 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	str[] = "breno gg";
	char	str2[] = "breno ggg";

	printf("strncmp : %d\n", ft_strncmp(str, str2, 9));
	return (0);
}*/
