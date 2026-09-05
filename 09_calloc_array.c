#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 4;
    int *numbers = calloc((size_t)count, sizeof(*numbers));

    if (numbers == NULL) {
        return 1;
    }

    for (int index = 0; index < count; index++) {
        printf("numbers[%d] starts at %d\n", index, numbers[index]);
    }

    free(numbers);
    return 0;
}
