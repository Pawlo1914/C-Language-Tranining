/*
read in two numbers and print sum
Some Coder 
Aug. 28, 2022
*/

#include <stdio.h> 

int main(void)
{
	int num1;
	int num2;
	int sum;
	printf("Please enter two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("num1 = %d, num2 = %d\n\n", num1, num2);
	sum = num1 + num2;
	printf("Sum = %d\n\n", sum);
	getchar(); getchar(); getchar(); getchar();
}
