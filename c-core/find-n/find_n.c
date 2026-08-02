#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c , 1);
}
int	main(int argc, char **argv)
{
	int i;
	char *error;

	error = "wrong number of arguments";
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'n')
			{
				ft_putchar('n');
				ft_putchar('\n');
				return (0);
			}
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
