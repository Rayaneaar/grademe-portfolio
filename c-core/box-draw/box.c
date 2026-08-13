#include <stdlib.h>
#include <unistd.h>

// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
void column(int x , char start , char end , char mid)
{
	int col = 1;
	while (col <= x)	
	{
		if (col == 1)
			write(1 , &start, 1);
		else if (col == x)
			write(1 ,&end , 1);
		else
			write(1 , &mid , 1);
		++col;

	}
	write(1 ,"\n" , 1);
}

void row(int x, int y)
{
	if (x <= 0 || y <= 0)
		return;
	int row = 1 ;
	while (row <= y)
	{
		if (row == 1 || row == y)
			column(x , '+' , '+' , '-');
		else 
			column(x , '|' , '|' , ' ');
		++row;
	}
}
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int h = atoi(av[2]);
		int w = atoi(av[1]);
		row(w , h);
	}	

	else if (ac != 3)
		write(1 , "wrong number of arguments\n" , 26);
	return (0);
}
