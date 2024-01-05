#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which 'src' is appended.
 * @src: The source string to append to 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */

char *_strcat(char *dest, char *src)
{
	int dest_index = 0, src_index = 0;

	/* Find the end of the destination string */
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	/* Append the source string to the destination string */
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	/* Add the terminating null byte to the destination string */
	dest[dest_index] = '\0';

	return (dest);
}
