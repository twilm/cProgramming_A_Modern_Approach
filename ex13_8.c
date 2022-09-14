// What will be the value of the string str after the following statements have been exe
// cuted?
// strcpy(str, "tire-bouchon"); = tire-bouchon
// strcpy(&str[4], "d-or-wi"); = Tommd-or-wi (if str is Tommy, starts from the 5th letter
//									subscripted 4, then copies d-or-wi over )
// strcat(str, "red?"); = adds red? to the end of the string

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = {"Tommy"};

//	strcpy(str, "tire-bouchon");
//	printf("%s\n", str);
//	strcpy(&str[4], "d-or-wi");
//	printf("%s\n", str);
	strcat(str, "red?");
	printf("%s\n", str);
}
