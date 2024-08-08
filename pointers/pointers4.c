#include <stdio.h>

int main(int argc, char const *argv[])
{
    // p++ moves the pointer to the next element of its type.
    int arr[3] = {1, 2, 3};
    int *p = arr;
    // if we have a variable storing data, the pointer to that variable will hold the address of the first (or beginning) memory block of that variable.
    printf("%d\n", *p); // Prints 1
    printf("%d\n", *(p + 1)); // Prints 2
    return 0;
}
