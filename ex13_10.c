// The following function supposedly creates an identical copy of a string. 
// Whats wrong with the function?

#include <stdio.h>
#include <string.h>

char *duplicate(const char *p, const char *p2);


int main(void)
{
	char s1[20] = {"Tommy"}, s2[10] = {"Doodoo"}, s3[10];
	
	char *new = duplicate(s1, s3);
	printf("%s", new);
}

char *duplicate(const char *p, const char *p2)
{
	char *q = *p;
	while (*q != '\0') {
		q++;
	}
	while(*p2++ != '\0') {
		*q = *p2;
		q++; 
		p2++;
	}


	return p;
}
