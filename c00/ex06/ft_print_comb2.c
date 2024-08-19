#include <unistd.h>

void	ft_print_comb2(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0';
	while (c1 <= '9')
	{
		c2 = '0';
		while (c2 <= '9')
		{
			c3 = c1;
			while (c3 <= '9')
			{
				c4 = c2 + 1;
				while (c4 <= '9')
				{
					write (1, &c1, 1);
					write (1, &c2, 1);
					write (1, " ", 1);
					write (1, &c3, 1);
					write (1, &c4, 1);
					write (1, ", ", 2);
					c4++;
				}
				c3++;
			}
			c2++;
		}
		c1++;
	}		
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_comb2();
}
