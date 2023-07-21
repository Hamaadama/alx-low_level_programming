#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main function of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
	putchar(number);
	if (number != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
