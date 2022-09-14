// Modify Programming project 7 from Chapter 2 so that it includes the following
// function:
// void pay_amount(int dollars, int *twenties, int *tenss, int *fivess,
//					int *ones);
//
//	The function determines the smallest number of $20, $10, $5 and $1 bills necessary 
//	to pay the amount represented by the dollars parameter. The twenties parameter points
//	to a variable in which the function will store the number of $20 bills required. 
//	The tenss, fivess and ones parameters are similar.

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tenss, int *fivess, int *ones);

int main(void)
{
	int dollars = 0, twenties, tens, fives, ones;

	printf("Enter amount: ");
	scanf("%d", &dollars);
	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("Twenties: %d\n", twenties);
	printf("Tens: %d\n", tens);
	printf("Fives: %d\n", fives);
	printf("Ones: %d\n", ones);
	
}

void pay_amount(int dollars, int *twenties, int *tens, 
				int *fives, int *ones)
{
	*twenties = dollars / 20;
	dollars -= *twenties * 20;
	*tens = dollars / 10;
	dollars -= *tens * 10;
	*fives = dollars / 5;
	dollars -= *fives * 5;
	*ones = dollars;
}
