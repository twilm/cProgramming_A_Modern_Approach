#include <stdio.h>


int sum_array(int a[], int n);
// Prototypes for the sum_two_dimensional_array 
// include the following:
int sum_two_dimensional_array(int n, int m, int a[n][m]);
int sum_two_dimensional_array(int n, int m, int a[*][*]);
int sum_two_dimensional_array(int n, int m, int a[][m]);
int sum_two_dimensional_array(int n, int m, int a[][*]);

int main(void)
{
	int total;
	int i, j, k;
	//	printf("Enter numbers to sum: ");
	//	for (int i = 0; i < 5; i++)
	//	{
	//		scanf("%d", &a[i]);
	//	}

	//	int b[] = {3, 0, 3, 4, 1};
	//	compound literal
	total = sum_array((const int []){2 * i, i + j, j * k}, 3);

	printf("summed: %d\n", total);

}

int sum_array(int a[], int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}

	return sum;
}

int sum_two_dimensional_array(int n, int m, int a[n][m])
{
	int i, j, sum = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			{
				sum += a[i][j];
			}
	}
	return sum;
}
