/* 
This program will show us how main() function used
*/

#include <stdio.h>

void greeting()
{
	printf("Hello my friend!\n");
	printf("How are you doing today?\n");
}

int main()
{
	printf("Hello\n");
	greeting();
	getchar();
	return 0;
}
