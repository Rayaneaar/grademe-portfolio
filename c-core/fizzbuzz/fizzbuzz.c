#include <unistd.h>
void putchar(char c)
{
	write(1 , &c ,1 );
}
void putnbr(int n)
{
	if (n >= 10)
		putnbr(n / 10);
	putchar((n % 10) + '0');
}
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1,"FizzBuzz" , 8);
		else if (i % 3 == 0)
			write(1 , "Fizz" , 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
			putnbr(i);
		i++;
		write(1 , "\n", 1);
	}
	return (0);

}
