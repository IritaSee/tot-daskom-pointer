#include <stdio.h>

int main(void)
{
    int *integer_pointer = NULL;
    char *character_pointer = NULL;

    printf("size of int pointer: %zu bytes\n", sizeof(integer_pointer));
    printf("size of char pointer: %zu bytes\n", sizeof(character_pointer));

    return 0;
}
