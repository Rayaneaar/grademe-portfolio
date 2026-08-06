#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c , 1);
}
int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
int	main(int ac, char **av)
{
	int i = 0;
	if (ac >= 2)
	{
		while(av[1][i])
		{
			if (is_alpha(av[1][i]))
			{
				if (av[1][i] == 'z')
					ft_putchar('a');
				else if (av[1][i] == 'Z')
					ft_putchar('A');
				else
					ft_putchar(av[1][i] + 1);
			}
			else
			ft_putchar(av[1][i]);
			i++;
		}
	}
	else 
		write(1 , "wrong number of arguments", 25);
	ft_putchar('\n');
	return (0);
}