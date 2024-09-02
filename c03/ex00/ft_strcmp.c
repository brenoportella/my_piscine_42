
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	str[] = "breno portella";
	char	str2[] = "creno portella";

	printf("str compare : %d\n", ft_strcmp(str, str2));
	return (0);
}*/