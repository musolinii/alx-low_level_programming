#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
        printf("%d\n", argc - 1);
        return 0;
}
