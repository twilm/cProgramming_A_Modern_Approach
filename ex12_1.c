// Suppose that the following declarations are in effect 
// int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
// int *p = &a[1], *q = &a[5];
// a) what is the value of *(p+3)?
// ANSWER: 54. a[4] 
// b) what is the value of *(q-3)?
// ANSWER: 34 a[2]
// c) what is the value of q - p?
// ANSWER: a[4] 14
// d) Is the condition p < q true or false?
// true
// e) Is the condition *p < *q true or fulse?
// false
#include <stdio.h>

int main(void)
{	
	 int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	 int *p = &a[1], *q = &a[5];

	 *p + 3;
}
