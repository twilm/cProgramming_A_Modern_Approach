// Enter a number: 491-9014
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_DIGITS 10
#define ROWS	   4
#define COLS	   4

/* Stores the digit segments */
int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},	// 0
							   {0, 1, 1, 0, 0, 0, 0},	// 1
							   {1, 1, 0, 1, 1, 0, 1},	// 2
							   {1, 1, 1, 1, 0, 0, 1},	// 3
							   {0, 1, 1, 0, 0, 1, 1},	// 4
							   {1, 0, 1, 1, 0, 1, 1},	// 5
							   {1, 0, 1, 1, 1, 1, 1},   // 6
							   {1, 1, 1, 0, 0, 0, 0},	// 7
							   {1, 1, 1, 1, 1, 1, 1},	// 8
							   {1, 1, 1, 1, 0, 1, 1}}; 	// 9

char digits[ROWS][MAX_DIGITS * COLS]; 
int top = 0;

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char c;

	while ((c = getchar()) != '\n') {
		c = getchar();

	return 0;
}

/*													*
 * print_digits_array:	Prints the array (digits)	*
 *													*/

void print_digits_array(void)
{
	int i;
	for (i = 0; i < MAX_DIGITS; i++) {
		printf("%d", digits[i]);
	}
}

/* clear_digits_array:				   *
 *			Clears digit array		   */

void clear_digits_array(void)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < MAX_DIGITS * COLS; j++) {
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position)
{
	for (int i = 0; i < 7; i++)	{
		if (segments[digit][i])
			row = ;
				}

}

