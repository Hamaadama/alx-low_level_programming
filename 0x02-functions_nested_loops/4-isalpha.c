#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @character: character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int character)
{
	return ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'));
}
