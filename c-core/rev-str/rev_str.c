int ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_str(char *str)
{
	int		last;
	int start;
	char tmp;
	last = ft_strlen(str) - 1;
	start = 0;
	while (start < last)
	{
		tmp = str[start];
		str[start] = str[last];
		str[last] = tmp;
		start++;
		last--;
	}
	return (str);
}