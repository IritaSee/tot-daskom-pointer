#include <stdio.h>

int main(void)
{
    const char *message = "Hello, pointers!";

    while (*message != '\0') {
        putchar(*message);
        message++;
    }
    putchar('\n');

    return 0;
}
