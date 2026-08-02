#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'e')
			{
				ft_putchar('e');
				ft_putchar('\n');
				return (0);
			}

			i++;
		}
	ft_putchar('\n');


	}
	else
	{			
		ft_putchar('e');
		ft_putchar('\n');
	}

	return (0);
}
