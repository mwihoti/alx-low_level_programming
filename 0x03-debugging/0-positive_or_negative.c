#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Entry point
 * assiign random number to variable n
 *
 * @n: is greater than 0 is positve otherwise return negative
 * number equal to zero return zero
 * Return: 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
