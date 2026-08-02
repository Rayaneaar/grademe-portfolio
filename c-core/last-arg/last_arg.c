#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c , 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	index;
	char *error;

	i = 0;
	error = "wrong number of arguments";
	if (argc >= 2)
	{
		index = argc - 1;
		while (argv[index][i])
		{
			ft_putchar(argv[index][i]);
			i++;
		}
	}
	else
	{
		while (error[i])
		{
			ft_putchar(error[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
