#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of a given array
 * @a: the array to be considered
 * @n: input n elements
 *
 * Return: void, nothing just do the printing to the stdout
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
