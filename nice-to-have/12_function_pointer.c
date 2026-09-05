#include <stdio.h>

int add(int first, int second)
{
    return first + second;
}

int main(void)
{
    int (*operation)(int, int) = add;

    printf("result: %d\n", operation(10, 5));

    return 0;
}
