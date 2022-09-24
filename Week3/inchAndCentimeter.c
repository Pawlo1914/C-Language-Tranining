/*
This program caculates length either in inch or centimeter 
Some coder
Sep. 6, 2022
*/
#include <stdio.h>
#define INCHTOCM 2.54

int main(void)
{
	int length = 0;
	char unit = 0;
	double result = 0.0;
	printf("Enter legth followed by its unit (either i or c): ");
	scanf("%d %c", &length, &unit);
	if (unit == 'i')
	{
		result = length * INCHTOCM;
		printf("%d inch = %lf centimeter", length, result);
	}
	else
	{
		result = length / INCHTOCM;
		printf("%d cm = %lf inchs", length, result);
	}
	return 0;
}
