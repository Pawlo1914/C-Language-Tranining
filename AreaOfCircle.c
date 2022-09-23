/*
Circle and area
Some Coder
Aug. 28, 2022
*/

#include <stdio.h>
#define PI 3.14159
int main(void)
{
	double radius, area;
	printf("Input radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("radius of %lf meters is %lf sq. meters\n", radius, area);
}
