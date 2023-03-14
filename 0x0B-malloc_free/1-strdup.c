#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
        char *s;
        int i = 0;
        int j;

        while (str[i] != '\0')
        {
                i++; 
        }

        s = malloc(sizeof(char) * i);

        if (s == NULL)
                return NULL;

        j = 0;
        while (str[j] != '\0')
        {
                str[j] = s[j];
                j++;
        }
        return (s);

}
