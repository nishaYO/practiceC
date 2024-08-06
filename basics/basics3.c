#include <stdio.h>
#include <string.h>

int main()
{
    // strings are generally printed as char arrays in C as there is no specific built in datatype for strings
    char str1[5] = "yo"; //5 here is the length of hte total string including hte end character /0 
    char str2[4] = "hell"; //this will have undefined behaviour becauser of array overflow error
    printf("str: %s\n", str1);
    printf("str: %s", str2);
    return 0;
}
