#include <stdio.h>

/**
 * main - function main of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != 'e' && lower != 'q')
	putchar(lower);
	}
	putchar('\n');

	return (0);
}
