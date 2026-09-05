# Pointer Examples in C

These examples introduce pointers one idea at a time. Each program is independent and can be compiled by itself.

## Compile and run one example

```sh
gcc -std=c11 -Wall -Wextra -pedantic 01_address_and_value.c -o 01_address_and_value
./01_address_and_value
```

Replace the filename and output name to try another example.

## Examples

1. `01_address_and_value.c` - a pointer stores the address of a variable.
2. `02_change_value.c` - a function changes a variable through a pointer.
3. `03_swap_values.c` - pointers let a function change two values.
4. `04_array_with_pointer.c` - an array can be visited using pointer arithmetic.
5. `05_string_with_pointer.c` - a pointer can read characters in a string.
6. `06_struct_with_pointer.c` - the `->` operator accesses a struct through a pointer.
7. `07_void_pointer.c` - a `void *` can store different address types with casting.
8. `08_dynamic_array.c` - `malloc`, `realloc`, and `free` create and resize an array.
9. `09_calloc_array.c` - `calloc` creates zero-initialized memory.

## Coverage of Modul 9

The examples cover the module's pointer definition and operations, pointer and array,
pointer and string, dynamic memory allocation, pointer and struct, pointer and function,
void pointers, and explicit typecasting.

## Important idea

A pointer is a variable that stores an address. The `&` operator gets an address, and the `*` operator follows an address to read or change the value stored there.
