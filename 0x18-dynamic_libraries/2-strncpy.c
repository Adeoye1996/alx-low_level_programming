#include "main.h"

/**
 * _strncpy - Copy a string.
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int index = 0;

    while (index < n && src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }

    while (index < n)
    {
        dest[index] = '\0';
        index++;
    }

    return (dest);
}
