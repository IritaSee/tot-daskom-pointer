#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 3;
    int *numbers = malloc((size_t)count * sizeof(*numbers));

    if (numbers == NULL) {
        return 1;
    }

    for (int index = 0; index < count; index++) {
        numbers[index] = (index + 1) * 10;
    }

    count = 5;
    int *new_numbers = realloc(numbers, (size_t)count * sizeof(*numbers));

    if (new_numbers == NULL) {
        free(numbers);
        return 1;
    }

    numbers = new_numbers;
    numbers[3] = 40;
    numbers[4] = 50;

    for (int index = 0; index < count; index++) {
        printf("numbers[%d] = %d\n", index, numbers[index]);
    }

    free(numbers);
    return 0;
}
