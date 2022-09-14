// The following function calls supposedly write a single new-line character, but some
// are incorrect. Identify which calls don't work and explain why.
// ANSWER: if "%c" and '\n' or "%s" and "\n" its okay because the ' = char; 
// %c expects char, %s expects string, " = string. So if opposite is true; 
// printf( expects string-not char like in e
// putchar expects char - h won't work 
// puts expects a string - so i will not work.
// a) printf("%c", '\n');		g) putchar('\n');
// ANSWER: works				ANSWER:
// b) printf("%c", "\n");		h) putchar("\n");
// ANSWER: This will literally	ANSWER:
// write \n not \n escape char		
// c) printf("%s", '\n');		i) puts('\n');
// ANSWER:						ANSWER:
// d) printf("%s", "\n");		j) puts("\n");
// ANSWER:						ANSWER:
// e) printf('\n');				k) puts("");
// ANSWER:						ANSWER:
// f) printf("\n");
// ANSWER:
#include <stdio.h>
int main(void)
{
	printf("%c", '\n');
	printf("%s", "\n");
	printf("%s", '\n');
	printf("%s", "\n");

}
