#include <stdio.h>

void decompose(double, long *, double *);

int main(void)
{
	int i, *p = &i;	/* points only to integers   */
	double *q;  /* points only to doubles		 */
	char *r;	/* points only to characters	 */

	decompose(3.14159, &i, &d);
}
	
void decompose(double x, long *int_part, double *frac_part)
{
	*int_part = (long) x;
	*frac_part = x - *int_part;
}
//	
//	//p = &i;		/* p points to i			 */
//	printf("%d\n", *p);
//
//	j = *&i;		/*		same as j = i;		 */
//
//	p = &i;			/* As long as p points to i 
//						p is an alias for i		 */
//	q = p;			/* Copies p into q			 */
