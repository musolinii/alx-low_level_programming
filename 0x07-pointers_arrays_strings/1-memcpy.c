#include "main.h"
/**
 * *_memcpy
 * @dest
 * @src
 * @n
 * Description
 * Return
 */

<<<<<<< HEAD
char *memcpy(char *dest, char *src, unsigned int n)
=======
char *_memcpy(char *dest, char *src, unsigned int n)
>>>>>>> b57f90b (fix stuff)
{
    unsigned int i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
