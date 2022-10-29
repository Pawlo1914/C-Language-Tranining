/*
This program show how if else if statement works 
some coder
Oct. 29th, 2022
*/

#include <stdio.h>

int main(void)
{
	int temprature;
	printf("Enter outside temprature: ");
	scanf("%d", &temprature);
	if (temprature <= 32)
	{
		printf("Vrey cold, please wear big jacket\n");
	}
	else if (temprature >= 32 && temprature <= 60 )
	{
		printf("Cold, please wear light jacket\n");
	}
	else if (temprature >= 60 && temprature <= 75 )
	{
		printf("nice weather, enjoy it\n");
	}
	else 
	{
		printf("Very hot, wear light clothing\n");
	}
	return 0;
}