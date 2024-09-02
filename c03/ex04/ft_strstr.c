
//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(!*to_find)
		return(str);
	while(str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str [i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "breno gg portella";
	char	find[] = "gg";

	printf("%s\n", ft_strstr(str, find));
}*/
