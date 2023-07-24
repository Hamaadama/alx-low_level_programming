#include "main.h"

/**
 * _abs - return absolute value of a number
 * @number: number to be checked
 *
 * Return: the absolute value of a given int
 */
int _abs(int number)
{
	if (number >= 0)
	{
		return (number);
	}
	return (-number);
}
