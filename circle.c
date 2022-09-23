/*
This program will calculate area of a circle
*/

#include <stdio.h>
#define PI 3.14159

int main(void)
{
	// area = PI * radius * radius;
	int radius = 1; 
	double area = 0.0;
	area = PI * radius * radius;
	printf("area of %d circle = %lf inch square\n", radius, area);
}
