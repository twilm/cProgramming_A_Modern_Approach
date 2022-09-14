// Suppose that str is an array of characters. Which one of
// the following statements is not equivalent to the other three
// a) *str = 0
// b) str[0] = '\0'
// c) strcpy(str, "");
// d) strcat(str, "")'
// Answer: 
//		 D - D just adds "" to end of string. 
//		 the other answers clear the string. 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5] = {"Tommy"}; 
	printf("%s\n", str);
//	*str = 0;
//	printf("%s\n", str);
//	str[0] = '\0';
//	printf("%s\n", str);
//	strcpy(str, "");
//	printf("%s\n", str);
	strcat(str, "");
	printf("%s", str);

}
