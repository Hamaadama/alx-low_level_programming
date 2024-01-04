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
    int src_index = 0;

    // Finding the length of the destination string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Appending source to destination
    while (src[src_index] != '\0')
    {
        dest[dest_len] = src[src_index];
        dest_len++;
        src_index++;
    }

    // Adding the null terminator at the end
    dest[dest_len] = '\0';

    return dest;
}
