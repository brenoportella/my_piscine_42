
#include <unistd.h>

void	ft_putchar(char l)
{
	write (1, &l, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_verify(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nb;
	int	base_len;

	nb = nbr;
	base_len = ft_strlen(base);
	if (!base_verify(base) || base_len <= 1)
		return;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > (base_len - 1))
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}
/*
int	main(void)
{
	char	*base;

	base = "01";
	ft_putnbr_base(-2147483646, base);
	ft_putchar ('\n');
	return (0);
}*/
