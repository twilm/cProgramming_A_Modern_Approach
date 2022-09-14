// Suppose that p has been declared as follows:
// char *p = "abc";
// Which of the following function calls are legal? 
// Show the output produced by each legal call, and explain why the others are illegal
// a) illegal = receives a pointer to char - expects a char
// b) legal	 = receives the char - will output a
// c) legal	=	puts expects a pointer - receives one. Will output abc
// d) illegal -		receives a char, not a pointer to a char
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p = "abc";

	putchar(p);
	putchar(*p);
	puts(p);		
	puts(*p);


}
