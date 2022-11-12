/*
Functions
Pawlos Ibdengle 
Nov. 5, 2022
*/

#include <stdio.h>

#define PI 3.14159

void circle_area(int radius)
{
	double area = 0.0;
	area = PI * radius * radius;
	printf("Area of a circule with radius %d: %lf\n", radius, area);
}

void poem_example()
{
	printf("    The Rainbow\n");
	printf("\n");
	printf("Boats sail on the rivers,\n");
	printf("And ships sail on the seas\n");
	printf("But clouds that sail across the sky\n");
	printf("Are prettier far than these.\n");
	printf("\n");
	printf("There are bridges on the rivers,\n");
	printf("As pretty as you please;\n");
	printf("But the bow that bridges heaven,\n");
	printf("And overtops the trees,\n");
	printf("And builds a road from earth to sky,\n");
	printf("Is prettier far than these\n");
}

int main(void)
{
	poem_example();
	printf("\n\n");
	circle_area(1);
	getchar();
	return 0;
}
