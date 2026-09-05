#include <stdio.h>

int main(void)
{
    int number = 10;
    int *number_pointer = &number;
    int **pointer_to_pointer = &number_pointer;

    printf("number: %d\n", number);
    printf("through one pointer: %d\n", *number_pointer);
    printf("through two pointers: %d\n", **pointer_to_pointer);

    **pointer_to_pointer = 20;
    printf("new number: %d\n", number);

    return 0;
}
