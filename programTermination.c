#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	return 0;			// value returned by main is a status code. Should return a value other than 0
	exit(0); /* normal termination */
	exit(EXIT_SUCCESS); /* normal termination */
	exit(EXIT_FAILURE); /* abnormal termination */
		// MACROS defined in stdlib.h
		// values are implementation defined; typical values are 0 and 1 respectively
		// return and exit are closely related. // return expression; 
		//										// equivalent to:
		//										//	exit(expression);
}

// Older C programs often omit main's return type, taking advantage of the fact it tra-
// ditionally defaults to int:
//
//	NO LONGER LEGAL C99 - AVOID
main()	// Omitting word void in main's parameter list remains legal, but as matter of
		// style bst to be explicit about fact main has no parameters
{

}


