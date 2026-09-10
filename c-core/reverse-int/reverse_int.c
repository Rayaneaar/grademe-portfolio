#include <stddef.h>

void	reverse_int(int *a, size_t n)
{
	size_t i = 0;
	int index = n - 1;
	int tmp;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[index];
		a[index] = tmp;
		i++;
		index--;
	}
}
