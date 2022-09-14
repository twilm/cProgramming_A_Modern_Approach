// If i is an int variable and p and q are pointers to i, which of the following assi-
// gnments are legal?
// a) p = i;	d) p = &q;	g) p = *q;
// b) *p = &i;	f) p = q;	i) *p = *q;
// Answer:
//		 f, i, d
int main(void)
{
	int i, *p, *q;
	i = 10;
	p = &i;
	q = &i;
	
	p = i;
	*p = &i;
	p = &q;
	p = *q;
	p = q;
	*p = *q;
}
