#include "main.h"
/**
 * *_strchr
 * @s
 * @c
 * Return
 * Description
 */

char *_strchr(char *s, char c);
{
    unsigned int i = 0;

    if (s[i] == c)
    {
        return (s[i]);
    }

    else if (s[i] == \0)
    {
        return (NULL);
    }

    else i++;
}


