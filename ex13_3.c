// Suppose that we call scanf as follow:
// scanf("%d%s%d", &i, s, &j);
// if user enters 12abc34 56def78, what will the values of i, s and j after the call?
// (Assume that i and j are int variables and s in an array of chars.
// ANSWER: Shouldn't work? Stack smashing detected when testing answer.
#include <stdio.h>
int main(void)
{
	int i, j;
	char s[3];

	scanf("%d%s%d", &i, s, &j);
	printf("%d%s%d", i, s, j);
	return 0;
}
