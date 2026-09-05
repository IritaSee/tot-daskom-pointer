#include <stdio.h>

int main(void)
{
    int age = 20;
    int *age_pointer = &age;

    printf("age value: %d\n", age);
    printf("age address: %p\n", (void *)&age);
    printf("pointer stores: %p\n", (void *)age_pointer);
    printf("value through pointer: %d\n", *age_pointer);

    return 0;
}
