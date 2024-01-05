#include "main.h"

/**
 * _strncpy - Copies a string, including the terminating null byte,
 * using at most an inputted number of bytes.
 *
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes copied.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy src to dest */
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, pad the remaining space with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
