#include "main.h"
/**
 * *_memcpy
 * @dest
 * @src
 * @n
 * Description
 * Return
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
