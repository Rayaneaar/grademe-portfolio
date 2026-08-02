#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	char *error;

	i = 0;
	error = "wrong number of arguments";
	if (argc >= 2)
	{
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	if (argc == 1)
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
