#include <string.h>
#include <stdio.h>

int main() {
    char substr[] = "\r\n";
    char str[] = "this is a string literal\n";
    char *result = strpbrk(str, substr); // find any one of the chars in substr
    printf("result : (%s)\n", result);
    return 0;
}