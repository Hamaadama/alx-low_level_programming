#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination to be copied to
 * @src: source from which the copy will be done
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
