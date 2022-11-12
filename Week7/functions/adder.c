#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int x = 9; 
	int	y = 7;
	int addition = add(x, y);
	printf("sum = %d", addition);
	return 0;
}
