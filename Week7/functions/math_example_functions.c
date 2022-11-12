/*
This program show how to create a user-defined function and use them 
Pawlos Ibedengle
Nov. 5, 2022
*/

#include <stdio.h>

int squre(int n)
{
	return n * n;
}

int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

double multuply_2(double x, double y)
{
	return x * y;
}

void sum(int a, int b) 
{
	printf("Sum = %d\n", a + b);
}

int main(void)
{
	int a = 5, b = 6;
	double num1 = 1.1, num2 = 2.2;
	printf("Square of %d = %d\n", a, squre(a));
	printf("%d + %d = %d\n",a, b, add(a, b));
	int result = multiply(a, b);
	printf("%d * %d = %d\n",a, b, result);
	double result2 = multuply_2(num1, num2);
	printf("%lf * %lf = %lf\n",num1, num2, result2);
	
	sum(a, b);            // calling the void function
	return 0;
}
	