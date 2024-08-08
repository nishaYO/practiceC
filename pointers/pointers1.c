#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 5;
    int *ptr = &num;
    printf("num: %d, ptr: %d\n", num, *ptr);
    printf("num: %d, ptr: %p\n", num, ptr);
    printf("address of num: %p\n", &num);
    printf("address stored in ptr: %p\n", &*ptr);
    // output:
    // num: 5, ptr: 5
    // num: 5, ptr: 0061FF18
    // address of num: 0061FF18
    // address stored in ptr: 0061FF18
    return 0;
}
