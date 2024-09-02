
//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main()
{
	char	str1[20] = "breno ";
	char	str2[] = "gg";

	printf("%s\n", str1);
	strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}*/
