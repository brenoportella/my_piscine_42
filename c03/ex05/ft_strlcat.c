
//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (src_size + size);
	while (src[i] != '\0' && i < (size -  dest_size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*
int	main(void)
{
	char	str1[20] = "breno";
	char	str2[] = " gg portella";
	unsigned int		size;
	unsigned int		result;

	size = 80;
	result = ft_strlcat(str1, str2, size);
	printf("str dest + src limited by size is: %d\n", result);
	return (0);
}*/
