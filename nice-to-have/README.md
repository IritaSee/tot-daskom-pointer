# Nice-to-have Pointer Examples

These optional examples come from topics covered in the GeeksforGeeks article
[Pointers in C](https://www.geeksforgeeks.org/c/c-pointers/) that are not needed
for the main Modul 9 examples.

1. `10_null_pointer.c` - check a pointer before using it.
2. `11_pointer_arithmetic.c` - move through an array and subtract pointers.
3. `12_function_pointer.c` - call a function through a pointer.
4. `13_multilevel_pointer.c` - use a pointer to another pointer.
5. `14_constant_pointers.c` - compare a pointer to constant with a constant pointer.
6. `15_pointer_size.c` - inspect pointer size with `sizeof`.

Compile an example from the project directory:

```sh
gcc -std=c11 -Wall -Wextra -pedantic nice-to-have/12_function_pointer.c -o /tmp/12_function_pointer
/tmp/12_function_pointer
```

The article also discusses wild and dangling pointers. They are intentionally not
dereferenced here because doing so causes undefined behavior. The main dynamic-array
example demonstrates the safer practice of freeing allocated memory.
