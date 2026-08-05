char	*strstr(const char *haystack, const char *needle)
{
	int i = 0;
	int j;
	if (!(*needle))
		return ((char *)haystack);

	while (haystack[i])
	{
		j = 0;
		while (needle[j]&& needle[j] == haystack[i + j] )
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
