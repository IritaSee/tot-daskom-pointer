#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40};
    int *first = &numbers[0];
    int *last = &numbers[3];

    printf("first value: %d\n", *first);
    printf("next value: %d\n", *(first + 1));
    printf("items between pointers: %td\n", last - first);

    return 0;
}
