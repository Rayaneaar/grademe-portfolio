#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
if (ac != 2)
{
    write(1, "wrong number of arguments", 25);
    write(1, "\n", 1);
    return (0);
}

i = ft_strlen(av[1]) - 1;

while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
    i--;

if (i < 0)
{
    write(1, "\n", 1);
    return (0);
}

while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
    i--;

i++;

while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
{
    ft_putchar(av[1][i]);
    i++;
}

write(1, "\n", 1);
}
