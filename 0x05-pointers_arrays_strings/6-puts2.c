#include "main.h"

/**
 * puts2 - print 1 out of 2 character
 * of a string starting by the first.
 * @str: string to be considered
 *
 * Return: void, nothing just print
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
