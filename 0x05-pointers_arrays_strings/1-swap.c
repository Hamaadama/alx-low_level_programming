#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: the first number
 * @b: the second number
 *
 * return: void, nothing just do the swaping
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
