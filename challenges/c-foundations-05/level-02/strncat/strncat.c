#include <stddef.h>

char	*strncat(char *dst, const char *src, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j]	 = '\0';
	return (dst);
}
