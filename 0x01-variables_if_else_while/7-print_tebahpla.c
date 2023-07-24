#include <stdio.h>

/**
 * main - function main of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	putchar(lower);
	putchar('\n');

	return (0);
}
