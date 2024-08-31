
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str_test [] = "breno gg";
	int	result;

	result = ft_str_is_printable(str_test);
	printf("%d the string is: %s\n", result, str_test);
}*/
