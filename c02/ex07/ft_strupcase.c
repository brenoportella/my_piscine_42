
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 126)
			str[i] = str[i]-32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str_lower [] = "brEno gg";

	ft_strupcase(str_lower);

	printf("%s\n", str_lower);
}*/
