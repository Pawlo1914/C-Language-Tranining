/*
this program will do covert distance to KM or Miles
depends on the user input
*/
#include <stdio.h>
int main(void)
{
	double factor = 1.609;
	double length = 0.0;
	double result = 0.0;
	char unit = 0;
	printf("Input length followed by unit: (k, m): ");
	scanf("%lf %c", &length, &unit);
	if(unit == 'm')
	{
		result = length * factor;
		printf("length = %lf killometers\n", result);
	}
	else if(unit == 'k')
	{
		result = length / factor;
		printf("length = %lf miles\n", result);
	}
	else
	{
		printf("wrong input\n");
	}
}

		