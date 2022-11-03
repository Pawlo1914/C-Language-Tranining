/*
This program prints the numbers from 0 to 10 using for loop 
*/

#include <stdio.h>

int main(void)
{
	int i;
	for(i = 0; i <= 1000; i++)
	{
		printf("%d \t %d\n", i, i*i);
	}
	return 0;
}
