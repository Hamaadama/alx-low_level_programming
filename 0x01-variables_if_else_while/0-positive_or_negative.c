#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main function of c.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d: is positive", n);
	} else if (n < 0)
	{
		printf("%d: is negative", n);
	} else
	{
		printf("%d: is zero", n);
	}

	return (0);
}