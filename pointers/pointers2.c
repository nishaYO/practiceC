#include <stdio.h>

int main(int argc, char const *argv[])
{
    // & gets the address where a var is located. 
    // * gets the value stored at an address

    // NOTE: proper way to log the pointers is using general pointer type (void*) because the printf command is compatible with that type. doing it directly might throw errors sometimes. 

    int num = 5;
    int *ptr = &num;  //reference
    int val = *ptr; //Dereference

    printf("num: %d, ptr: %p\n", num, (void*)ptr);
    printf("num: %d, addr of num: %p\n", num, (void*)&num); 
    printf("val: %d\n", val);
    // output 
    // num: 5, ptr: 0061FF18
    // num: 5, addr of num: 0061FF18
    // val: 5
    return 0;
}
