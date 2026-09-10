int	days_in_month(int year, int month)
{
	if (month <= 0 || month >= 13)
		return(-1);
	if (month == 2)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year %100 != 0))
			return (29);
		else
			return (28);
	}
	if ((month % 2 == 1 && month <= 7 ) || (month % 2 == 0 && month >= 8))
		return(31);
	else 
		return (30);
}
