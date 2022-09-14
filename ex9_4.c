// Write a function day_of_year(month, day, year) that returns the day of the 
// yeah (an integer between 1 and 366) specified by the aruments.
#include <stdio.h>

int day_of_year(int m, int day, int year);

int main(void)
{
	int mon = 6;
	int d = 20;
	int y = 2000;

	int result = day_of_year(mon, d, y);
	printf("%d\n", result); 
}

int day_of_year(int m, int day, int year)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;

	for (int i = 0; i < m; i++)
	{
		sum += month[i];
	}

	return sum - (month[m] - day);



}
