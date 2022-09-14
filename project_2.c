// Write a program that reads a message, then checks whether it's a palindrome (
// the letters in the message are the same from left to right as from right to left)
// Enter a message: He lived as a devil, eh?
// Palindrome
//
// Enter a message: Madam, I am Adam.
// Not a palindrome
#include <stdio.h>
#include <stdlib.h>


#define SIZE_OF ((int) sizeof(message) / sizeof(message[0]))
#define N 4
int main(void)
{
	int i; 
	char message[4];

	int j = SIZE_OF;

	printf("Enter message: ");
	for (i = 0; i < N; i++) 
	{
		scanf("%c", &message[i]);
	}

	int n = 0;
	while (n < N)
	{
		if (message[n] == message[j]) 
		{
			n++;
			j--;
			printf("%c %c", message[n], message[j]);
		}
		if (n == j)
		{
			break;
		}

	}
	printf("%c", j);
	if (j == 0) 
	{
		printf("Palindrom\n");
	} else {
		printf("Not a palindrome \n");
	}
}

