#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{       
        int i;
        for(i = 0; i < argc; i++)
        {
                puts(argv[i]);
        }
        return 0;
}
