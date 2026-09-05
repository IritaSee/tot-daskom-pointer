#include <stdio.h>

void swap(int *first, int *second)
{
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main(void)
{
    int left = 10;
    int right = 20;

    printf("before: left = %d, right = %d\n", left, right);
    swap(&left, &right);
    printf("after:  left = %d, right = %d\n", left, right);

    return 0;
}
