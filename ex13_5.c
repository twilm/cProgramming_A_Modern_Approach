// a) Write a function named capitalize that capitalizes all letters in its argument.
// The argument will be a null-terminated string containing arbitrary characters, not 
// just letter. Use array subscripting to access the characters in the string. Hint: Use the toupper
// function to convert each character to upper case.
// ANSWER: 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char str_arr[], int n);
void print_array(char str_arr[], int n);
int main(void)
{
	char array[5] = {'a', 'b', 'c', 'd', 'f'};
	capitalize(array, 5);
	print_array(array, 5);
	printf("\n");
}
void capitalize(char str_arr[], int n)
{	
	char *p = str_arr;
	while (*p) {
		*p++ = toupper(*p);
	}
}

void print_array(char str_arr[], int n)
{
	for (int i = 0; i < n; i++){
		printf("%c", str_arr[i]);
		}
}
