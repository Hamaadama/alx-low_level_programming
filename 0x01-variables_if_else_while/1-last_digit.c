#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function main of C.
 *
 * Return: Always 0 (Succes).
 */
int main(void)
{
	int n, end_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end_digit = n % 10;


	if (end_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, end_digit);
	}
	else if (end_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, end_digit);
	}
	else if (end_digit < 6 && end_digit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, end_digit);
	}

	return (0);
}
