/*
This program designs a simple calculator
*/
#include <stdio.h>

int main(void)
{
	int input1, input2;
	char operator;
	double result;
	printf("Input two numbers and an operator(either +, or -, or *, or/): ");
	scanf("%d %d %c", &input1, &input2, &operator);
	if (operator == '+')
		printf("%d + %d = %d", input1, input2, input1 + input2);
	else if (operator == '-')
		printf("%d - %d = %d", input1, input2, input1 - input2);
	else if (operator == '*')
		printf("%d * %d = %d", input1, input2, input1 * input2);
	else if(operator == '/')
	{
		result = (double) input1/input2;
		printf("%d / %d = %lf", input1, input2, result);
	}
	else
		printf("Wrong input\n");
	return 0;
}
