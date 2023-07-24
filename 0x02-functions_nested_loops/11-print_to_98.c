#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers up to the number 98
 * @n: the number from which the printing begins
 *
 * Return: void, the function just prints no return
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
