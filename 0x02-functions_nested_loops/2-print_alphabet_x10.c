#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet with a new line.
 */
void print_alphabet_x10(void)
{
	char character;
	int i;

	i = 0;

	while (i < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		i++;
	}
}
