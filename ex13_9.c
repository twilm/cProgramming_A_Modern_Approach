// What will be the value of the string s1 after the following statements have been
// executed?
//ANSWER: 
		// answer: computers\0
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20], s2[20];
	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0) { // less than 0 s1 starts with c, so comparing against sc-
							  // ience strcmp produces an output less than 0.
							  //
		strcat(s1, s2);		  // strcat(s1, s2); computerscience---
	} else {
		strcat(s2, s1);
	}
	s1[strlen(s1)-6] = '\0'; // strlen is 15 - 6 is 9. computers'\0'
}
								// answer: computers\0
