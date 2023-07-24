#include "main.h"

/**
 * _islower - checks if a given character is lower
 * @c: character to be checked
 *
 * Return: 1 if character is lowercase, otherwise 0.
 */

int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}
