// Suppose that high, low and middle are all pointer variables of the same type,
// and that low and high point to elements of an array. Whis is the following state-
// ment illegal, and how could it be fixed?
// middle = (low + high) / 2;
// Statement is illegal because pointers cannot be added.
#include <stdio.h>
int main (void)
{
	int *high, *low, middle;
	middle = low + (high - low) / 2;
}
