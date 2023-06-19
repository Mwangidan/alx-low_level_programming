#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This program will assign a random number to the variable
* Return: Always 0 (Pass)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("is positive\n");
	if (n == 0)
	printf("is zero\n");
	else if (n < 0)
	printf("is negative\n");
	return (0);
}
