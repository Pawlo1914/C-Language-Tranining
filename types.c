/*
this program show data types and their sizes 
*/

#include <stdio.h>

int main(void)
{
	int age = 13;
	char  p = 'p';
	double volume = 3.654;
	unsigned int age_2 = 22;
	signed int age_3 = 15;
	
	printf("Size of int = %d bytes\n", sizeof(int));
	printf("Size of char = %d bytes\n", sizeof(char));
	printf("Size of double = %d bytes\n",sizeof(double));
	printf("Size of unigned_int = %d bytes\n", sizeof(age_2));
	printf("Size of signed_int = %d bytes\n", sizeof(age_3));
	return 0;
}
	