#include <stdio.h>

void add_one(int *number)
{
    *number = *number + 1;
}

int main(void)
{
    int score = 7;

    printf("before: %d\n", score);
    add_one(&score);
    printf("after:  %d\n", score);

    return 0;
}
