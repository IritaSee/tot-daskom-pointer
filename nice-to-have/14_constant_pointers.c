#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 20;
    const int *value_pointer = &first;
    int *const fixed_pointer = &first;

    printf("read-only value: %d\n", *value_pointer);
    value_pointer = &second;

    *fixed_pointer = 15;
    printf("fixed pointer value: %d\n", *fixed_pointer);

    return 0;
}
