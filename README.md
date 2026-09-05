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

## Pass by value and pass by reference

### Pass by value

In pass by value, a function receives a copy of the argument. Changes to the
parameter do not change the original variable.

```c
void add_one(int number)
{
	number = number + 1;
}
```

Calling `add_one(score)` changes only the copy inside the function.

### Pass by reference using a pointer

C technically always passes arguments by value. To let a function change the
original variable, pass its address as a pointer. The function receives a copy
of the address, then uses `*` to change the value at that address.

```c
void add_one(int *number)
{
	*number = *number + 1;
}
```

Call it with `add_one(&score)`. The `&` sends the address of `score`, and `*number`
accesses the original `score`. This is commonly called pass by reference in C
lessons, although the precise description is passing a pointer by value.

Compare [02_change_value.c](02_change_value.c) with the pass-by-value version
above. [03_swap_values.c](03_swap_values.c) shows the same technique with two
variables.
