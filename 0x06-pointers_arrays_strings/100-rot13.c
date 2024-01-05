#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
