#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @s: string to be considered
 *
 * Return: void, nothing just do print.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
