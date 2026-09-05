#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40};
    int *number_pointer = numbers;
    int count = (int)(sizeof(numbers) / sizeof(numbers[0]));

    for (int index = 0; index < count; index++) {
        printf("numbers[%d] = %d\n", index, *(number_pointer + index));
    }

    return 0;
}
