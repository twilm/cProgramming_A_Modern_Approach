// Suppose that a is a one-dimensional array and p is a pointer variable. Assuming 
// that the assignment p = a has just been performed, which of the following expressions 
// are illegal because of mismatched types? Of the remaining expression, which are
// true (have a nonzero value)?
// a) p == a[0]
// Answer : false - a[0]
// b) p == &a[0]
// Answer : true
// c) *p == a[0]
// Answer : true
// d) p[0] == a[0]
// Answer : false -- but legal *(p + 0) compared to a[0]
// Actual ANswer: TRUE 
#include <stdio.h>
#include <stdbool.h>

bool check_answer(int array[], int point);

int main (void)
{
	int *p, a[5];
	*p = a[0];
	
	if (p == &a[0])
		printf("True God der\n");
	else
		printf("Nah not deadly\n");
}
