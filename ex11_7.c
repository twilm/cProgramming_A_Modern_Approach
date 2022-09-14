// Write the following function:
//	void split_date(int day_of_year, int year, int *month, int *day)
//	day_of_year is an integer between 1 and 366, specifying a particulat day within the year 
//	designated by year, month and day point to variables in which the function will store the
//	equivalent month (1-12) and day within that month (1-31)

#include <stdio.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);
int main (void)
{
	int doy = 150;
}
void split_date(int day_of_year, int year, int *month, int *day)
{
	bool found = false;
	int i;
	for (i = 1; i <= 12 && !found; i++) {
	switch (i)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (day_of_year <= 31)
				found = true;
			else 
				day_of_year -= 31;
		case 4: case 6: case 9: case 11:
			if (day_of_year <= 30)
				found = true;
			else
				day_of_year -= 30;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				if (day_of_year <= 29)
					found = true;
				else
					day_of_year -= 29;
			} else {
				if (day_of_year <= 28)
					found = true;
				else 
					day_of_year -= 28;
			}
		}
	}
	*month = i - 1;
	*day = day_of_year;
}

