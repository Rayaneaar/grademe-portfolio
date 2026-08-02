#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1,"9876543210", 10);
	write(1,"\n", 1);
	return (0);
}
