// Write the following function:
//	void find_two_largest(int a[], int n, int *largest, int *second_largest);
// ANSWER:
//		 #include <stdio.h>
//		 void find_two_largest(int a[], int n, int *largest, int *second_largest);
//		 
//		 int main(void)
//		 {
//		 	int num_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//		 	
//		 	find_two_largest(num_array, 10, &num_array[0], &num_array[1]);
//		 	printf("largest = %d \n", num_array[0]); 
//		 	printf("second largest = %d \n", num_array[1]); 
//		 
//		 
//		 }
//		 
//		 void find_two_largest(int a[], int n, int *largest, int *second_largest)
//		 {
//		 	int i;
//		 
//		 	*largest = a[0];
//		 	*second_largest = a[1];
//		 	for (i = 0; i < n; i++)
//		 	{
//		 		if (a[i] > *largest) {
//		 			*second_largest = *largest;
//		 			*largest = a[i];
//		 		}
//		 	}
//		 }
