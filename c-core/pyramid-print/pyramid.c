#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		else 
			return (0);
	}
	return (res);
}
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1 , "wrong number of arguments\n", 26);
		return (0);
	}
	int i = 1;
	int len = ft_atoi(av[1]);
	while (i <= len )
	{
		int k = len;
		int j = 0;
		while (i <= k - 1)
		{
			
			write(1 , " " , 1);
			k--;
		}
		while (j < 2 * i - 1 )
			{
				write(1, "#", 1);
				j++;
			}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
