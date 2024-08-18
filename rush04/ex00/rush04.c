#include <unistd.h>

void    ft_putchar(char a);

void	rush(int x, int y);

void    ft_putchar (char a)
{
        write (1, &a, 1);
}

void	rush (int x, int y)
{
	int	n_c;
	int	n_l;

	n_l = 1;
	while (n_l <= y)
	{
		n_c = 1;
		while (n_c <= x)
		{
			if (n_l == 1)
			{
				if (n_c == 1)
				{
					ft_putchar('A');
				}
				if (n_c > 1 && n_c < x)
				{
					ft_putchar('B');
				}
				if (n_c != 1 && n_c == x)
				{
					ft_putchar('C');
				}
			}
			if (n_l != 1 && n_l == y)
			{
				if (n_c == 1)
				{
					ft_putchar('C');
				}
				if (n_c > 1 && n_c < x)
				{
					ft_putchar('B');
				}
				if (n_c != 1 && n_c == x)
				{
					ft_putchar('A');
				}
			}
			if (n_l > 1 && n_l < y)
			{
				if (n_c == 1 || n_c == x)
				{
					ft_putchar('B');
				}
				if (n_c > 1 && n_c < x)
				{
					ft_putchar(' ');
				}
			}
		n_c++;
		}
	write (1, "\n", 1);
	n_l++;
	}
}

int	main (void)
{
	rush (5, 3);
	return 0;
}
