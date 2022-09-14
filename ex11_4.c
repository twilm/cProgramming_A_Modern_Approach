// Write the following function:
// void swap(int *p, int *q)
// When passed the addresses of two variables, swap should exchange the values of the variables:
// swap(&i, &j); /* Exchanges values of i and j */
// ANSWER: 


//		 void swap(int *p, int *q)
//		 {
//		 	int temp = *q;
//		 	*q = *p;
//		 	*p = temp;
//		 }
//		 	
