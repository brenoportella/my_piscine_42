#include <unistd.h>

void	ft_putchar(char a);

void	ft_putchar(char a)
{
	write (1, &a, 1);
	write (1, "\n", 1);	/*we must remove this new line, this is here just cuz my terminal prints wrong*/
}

int	main(int n_args, char *args[])
{
	ft_putchar(args[1][0]);
	return 0;
}
