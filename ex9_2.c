// Write a function check(x, y, n) that returns 1 if both x and y fall between 0 and n-1,
// inclusive. The function should return 0 otherwise. x, y, n all type int.

int check(int x, int y, int n)
{
	if (x <= n - 1 && y <= n - 1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
