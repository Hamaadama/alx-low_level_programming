#include <stdio.h>

/**
 * main - Main function of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	putchar(number);
	putchar('\n');

	return (0);
}