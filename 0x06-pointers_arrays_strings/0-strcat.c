#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to append to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append src to dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Null terminate dest */
	dest[dest_len] = '\0';

	return (dest);
}
