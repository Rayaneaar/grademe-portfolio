int	digit_count(int n)
{
	long nb = n;
	int count = 1;
	if (nb < 0)
		nb *= -1;
	while (nb >= 10)
	{
		nb /= 10;
		count ++;
	}
	return (count);
}
