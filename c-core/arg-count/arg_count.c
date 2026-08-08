#include <unistd.h>
void putchar(char c )
{
	write(1, &c , 1);
}

void putnbr(int n )
{
	if (n >= 10)
		putnbr(n/10);
	putchar((n % 10) + '0');
}
int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
		putchar(0 + '0');
	else
		putnbr(argc - 1);
	putchar('\n');
	return (0);
}