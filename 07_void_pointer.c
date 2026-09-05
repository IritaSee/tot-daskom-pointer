#include <stdio.h>

int main(void)
{
    int number = 42;
    void *value_pointer = &number;

    printf("value through void pointer: %d\n", *(int *)value_pointer);

    return 0;
}
