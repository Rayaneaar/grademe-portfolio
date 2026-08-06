#include <unistd.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	first_printed;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}

	i = 0;

	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;

	start = i;

	while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		i++;

	end = i;

	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;

	first_printed = 0;

	while (argv[1][i])
	{
		if (first_printed)
			write(1, " ", 1);
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		first_printed = 1;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
	}

	if (start != end)
	{
		if (first_printed)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}

	write(1, "\n", 1);
	return (0);
}