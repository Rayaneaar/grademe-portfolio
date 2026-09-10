int	digit_sum(int n)
{
	long nb = n;
	if (nb == 0)
		return (nb);
	if (nb <= 9  && nb >= 1)
		return (nb);
	if(nb <= -9 && nb >= -1)
		return (nb * -1);
	if (nb < 0)
		nb *= -1;
	return (nb % 10 + digit_sum(nb / 10));
}