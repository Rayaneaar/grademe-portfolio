#include <unistd.h>
void ft_putchar(char c)
{
	write(1 ,&c , 1);
}
int	main(int argc, char **argv)
{
	int i;
	int index;
	if (argc >= 2 )
	{
		index = argc - 1;
		while (index > 0)
		{
			i = 0;
			while (argv[index][i])
			{
				ft_putchar(argv[index][i]);
				i++;
			}
			index--;
			ft_putchar('\n');
		}
	}
	else
		return (0);
	return (0);
}