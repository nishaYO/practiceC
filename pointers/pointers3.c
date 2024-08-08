#include <stdio.h>

// In C, the void* type is known as a "generic pointer." It can point to any data type, but it doesn't have an associated type, so it doesn't know what kind of data it is pointing to. This makes void* very flexible but also means you can't directly dereference it without casting it to another pointer type.

int main(int argc, char const *argv[])
{
    // Key Points About void*:
    // Generic Pointer: A void* pointer can hold the address of any data type (e.g., int, char, float).

    // Type Safety: Since void* doesn't have a specific type, you cannot perform pointer arithmetic or dereference it directly. You need to cast it back to the appropriate type before dereferencing:
    int num = 5;
    void *ptr = &num;
    int *intPtr = (int *)ptr; // Cast back to int* to dereference
    printf("%d\n", *intPtr);  // Output: 5

    // Common Use Cases:

    // Function Arguments: Used in functions that need to accept pointers to data of any type (e.g., malloc, free, or callback functions).
    // Memory Management: Functions like malloc return a void* because the function doesn't know what type of data it will be used to allocate.

    return 0;
}