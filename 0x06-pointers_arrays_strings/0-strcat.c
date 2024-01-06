#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, src_len = 0;
    int i;

    /* Calculate the length of the destination string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Calculate the length of the source string */
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    /* Copy the characters from src to dest */
    for (i = 0; i <= src_len; i++)
    {
        dest[dest_len + i] = src[i];
    }

    return dest;
}
