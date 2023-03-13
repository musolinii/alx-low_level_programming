#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
    printf("%s", *argv);
    return 0;
}
