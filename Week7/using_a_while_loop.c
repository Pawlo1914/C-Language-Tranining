/*
This program prints the numbers from 0 to 100 using while loop 
*/

#include <stdio.h>

int main(void)
{
	int i = 0;
	while(i <= 10)
	{
		printf("%d \t %d\n", i, i*i);
		i++;
	}
	return 0;
}
