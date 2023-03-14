#include<stdlib.h>
#include<stdio.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
        int product = 0;
        int a, b;

        if (argc < 3)
        {
                printf("Error\n");
                return 1;
        }
/* atoi convert a string to an int */
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        product = a * b;
        printf("%d", product);
        return 0;
}
