// a) Write a program that reads a message then prints the reversal of
// the message:
// Enter a message: Don't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD
// Hint: Read the message one char at a time (using getchar) and store 
// the characters in an array. Stop reading when the array is full or the character 
// read is '\n'.
// b) revise the program to use a pointer instead of an integer to keep track of current
// position in array.
#include <stdio.h>

#define N 100

void print_array_backwards(char a[]);

int main(void)
{
	char message[N];
	char c, *ptr_mess = message;
	printf("Enter a message: ");

	while ((c = getchar()) != '\n' && ptr_mess < message + N)
		{
			*ptr_mess++ = c;
		}

	printf("Reversal is: ");
	while (ptr_mess > message - 1)
	{
		putchar(*ptr_mess--);
	}
	printf("\n");
	
	return 0;

}


