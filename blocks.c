// C allows compound statements to contain declarations as well:
// {declarations statements}
#include <stdio.h>

int main(void)
{
	int i, j;
	if (i > j)
	{
		/* swap values of i and j */
		int temp = i;
		i = j; 
		j = temp;
	}
}
