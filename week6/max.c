/* 
This program will find a maximum of two numbers 
Pawlos 
Oct. 29, 2022
*/

#include <stdio.h>

int main(void)
{
	int a = 8, b = 7;
	if (a > b)
	{
		printf("max(%d,%d) = %d", a, b, a);
	}
	else
	{
		printf("max(%d,%d) = %d", a, b, b);
	}
	return 0;
}
