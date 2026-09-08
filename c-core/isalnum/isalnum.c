int	isalnum(int c)
{
	if ((c <= '9' && c >= '0') ||(c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}
