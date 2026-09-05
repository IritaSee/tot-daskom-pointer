#include <stdio.h>

int main(void)
{
    int *number_pointer = NULL;

    if (number_pointer == NULL) {
        printf("The pointer does not point to a value yet.\n");
    }

    return 0;
}
