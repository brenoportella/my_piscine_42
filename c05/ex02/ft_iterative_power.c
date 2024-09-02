
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return(0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("the power of number is: %d\n", ft_iterative_power(3, -2));
}*/
