/*
This program converts temprature
*/

#include <stdio.h>

int main(void)
{
	double ferh, celsius;
	printf("Enter temprature in Fahrenheit: ");
	scanf("%lf", &ferh);
	celsius = (ferh - 32) * 5.0/9.0;
	printf("The given temprature is %lf celsius\n", celsius);
}

	