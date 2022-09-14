#include <stdio.h>

/* Version 1 */
int sum_array(int n, int a[n]);

/* Version 2a */
int sum_array(int n, int a[*]);		// reasoning for the * notation
									// is that paramter is omitted,
									// it wouldnt be possible to specify 
									// that the length of the array is
									// n, but the * provides a clue that
									// the length of the array is related to	
									// to the parameter that come earlier in list.

/* Version 2b */	//its also legal to have rbackets empty, as we normally do when 
					// declaring an array parameter
int sum_array(int, int[*]);		

int main(void)
{
}

//		int sum_array(int n, int a[n])
//		{
//			...
//		}

// explicitly state that a's length is n:
int sum_array(int n, int a[n])
{
	;
}

