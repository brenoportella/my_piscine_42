/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:38:44 by bportell          #+#    #+#             */
/*   Updated: 2024/09/02 20:58:13 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str [] = "AAAAAAA";
	int	result;

	result = ft_str_is_uppercase(str);
	printf("%i\n", result);

}*/
