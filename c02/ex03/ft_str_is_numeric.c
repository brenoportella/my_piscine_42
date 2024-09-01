/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bportell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:25:12 by bportell          #+#    #+#             */
/*   Updated: 2024/09/01 15:41:22 by bportell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' &&  str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	int	result;
	
	result = ft_str_is_numeric(str);
	printf("%i\n", result);
}*/
