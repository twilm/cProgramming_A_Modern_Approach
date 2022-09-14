// Modify the read_line function in each of the following ways:
// a) have it skip white space before beginning to store input characters.
// b) Have it stop reading at the first white-space character. Hint: to determine whether
// or not a character is white space, call the isspace function.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while (isspace(getchar()))
		;
	while ((ch = getchar()) != '\n' && (!isspace(ch)))  {
		if (i < n) {
			str[i++] = ch;
		} 
		if ((ch = getchar()) == '\n') {
			str[i++] = '\n';
			break;
		} 
	}
	str[i] = '\0';
	return i;
}



