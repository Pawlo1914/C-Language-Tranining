/*
This program prints 
*/

#include <stdio.h>

void keep_working()
{
	int i = 0;
	printf("I will\n");
	while(i < 10)
	{
		printf("keep\n");
		i++;
	}
	printf("working without giving up\n");
	printf("until i built the car.\n");
}

int main(void)
{
	int i;
	printf("I will\n");
	for(i = 0; i < 100; i++)
	{
		printf("keep\n");
	}
	printf("working without giving up\n");
	printf("until i built the car.\n");
	printf("\n\n");
	keep_working();  // calling function
	return 0;
}
	