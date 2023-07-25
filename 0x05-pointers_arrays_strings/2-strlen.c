#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: string to be used for the calculation
 *
 * Return: the length of the string s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
