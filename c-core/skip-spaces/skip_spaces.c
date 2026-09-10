// Return the address of the first character of s that is not a space or a tab.
// Only the leading run is skipped, and the buffer is never written to.
int ft_isspace(int c)
{
	if (c == 32 || c == '\t')
		return(1);
	return(0);
}
const char	*skip_spaces(const char *s)
{
	while (ft_isspace(*s))
		s++;
	return (s);
}
