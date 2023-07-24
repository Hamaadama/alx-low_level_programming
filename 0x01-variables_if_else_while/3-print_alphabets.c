#include <stdio.h>

/**
 * main - function main of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');

	return (0);
}
