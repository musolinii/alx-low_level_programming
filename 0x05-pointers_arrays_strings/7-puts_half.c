#include <stdio.h>
#include "main.h"

void print_half_string(char str[]) {
    int length = _strlen(str);
    int half_length = length / 2;

    for (int i = 0; i < half_length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
