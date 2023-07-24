#include <stdio.h>

/**
 * main - function main of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	int number;
	char lower;

	for (number = '0'; number <= '9'; number++)
	putchar(number);

	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);
}
