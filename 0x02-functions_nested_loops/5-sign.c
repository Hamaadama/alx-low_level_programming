#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @number: number to be checked
 *
 * Return: 1 and prints + if number is positive
 * 0 and prints 0 if number is zero -1 and
 * prints - if number is a negative integer.
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	} else if (number == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
	}
		return (-1);
}
