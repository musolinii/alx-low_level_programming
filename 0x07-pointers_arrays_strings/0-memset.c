#include "main.h"
/**
 * *_memset -main function.
 * @s:pointer to the buffer.
 * @b:Constant byte.
 * @n:size of buffer to fill.
 *
 * Description:This function fills memory wth a constant character.
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n);
{
    unsigned int i = 0;

    while (i < n)
    {
        s[i] = b;
        i++;
    }
    return (s);
}
