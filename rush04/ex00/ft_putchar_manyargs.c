#include <unistd.h>

void	ft_putchar(char a);

void	ft_putchar(char a)
{
	write (1, &a, 1);
	write (1, "\n", 1);	/*we must remove this new line, this is here just cuz my terminal prints wrong*/
}

int	main(int n_args, char *args[])
{
	int	args_qtd;

	args_qtd = 1;
	while (args_qtd <= n_args)
	{
		ft_putchar(args[args_qtd][0]);
		args_qtd++;
	}

	return 0;
}
