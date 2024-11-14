#include <stdio.h>

int main(){
    const char* strptr = "this is constant string literal";
    char str[] = "this is non constant string literal";
    printf("strptr : %s, strptr pointer : %p\n", strptr, strptr);
    printf("str : %s, str pointer : %p\n", str, str);
    return 0;
}