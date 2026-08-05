#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c , 1);
}
int	main(int argc, char **argv)
{
	int	index;
	int i = 0;
	char *error = "wrong number of arguments";
	if (argc == 2)
	{
		while (argv[1][i])
		{
			index = 0;	
			if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
			{
				if (argv[1][i] <= 'm' && argv[1][i] >= 'a')
				{
					index = argv[1][i] + 13;
					ft_putchar(index);
				}
				if (argv[1][i] <= 'z' && argv[1][i] >= 'n')
				{
					index = argv[1][i] - 13;
					ft_putchar(index);
				}
			}
			else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
			{
				if (argv[1][i] <= 'M' && argv[1][i] >= 'A')
				{
					index = argv[1][i] + 13;
					ft_putchar(index);
				}
			
				if (argv[1][i] <= 'Z' && argv[1][i] >= 'N')
				{
					index = argv[1][i]- 13;
					ft_putchar(index);
				}
			}		
			else 
				ft_putchar(argv[1][i]);
			
			i++;
		}

	}
	else
	{
		i = 0;
		while (error[i])
		{
			ft_putchar(error[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
