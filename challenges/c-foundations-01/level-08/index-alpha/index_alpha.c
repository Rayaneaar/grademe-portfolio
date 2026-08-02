#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int		i;
	int		repeated;
	char	*error;
	int		j;

	i = 0;
	j = 0;
	repeated = 0;
	error = "wrong number of arguments";
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] <= 'Z' && argv[1][i] >= 'A') || (argv[1][i] <= 'z'
					&& argv[1][i] >= 'a'))
			{
				if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
				{
					repeated = argv[1][i] - 'A';
					while (j < repeated)
					{
						ft_putchar(argv[1][i]);
						j++;
					}
				}
				else if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
				{
					repeated = argv[1][i] - 'a';
					while (j < repeated)
					{
						ft_putchar(argv[1][i]);
						j++;
					}
				}
				j = 0;
				repeated = 0;
			}
			else
				ft_putchar(argv[1][i]);
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