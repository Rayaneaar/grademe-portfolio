int max(int *tab, unsigned int len)
{
	unsigned int	i = 0;
	int	max_number  = 0;
	if (len == 0)
		return (max_number);
	if (len == 1)
		return (tab[0]);
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
				max_number = tab[i];
		i++;
	}
	return (max_number);
}