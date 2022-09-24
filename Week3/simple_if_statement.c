/*
simple if statement 
*/
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	printf("Please enter two integers\n");
	scanf("%d %d", &a, &b);
	if(a < b)  // condition
	{
		       // first alternative (taken if condition is true)
		printf("max(%d, %d) is %d", a, b, b);
	}
	else 
	{
		// second alternative (taken if condition is false)
		printf("max(%d, %d) is %d", a, b, a);
	}
	return 0;
}
