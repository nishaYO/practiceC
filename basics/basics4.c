#include <stdio.h>
#include <string.h>   // common methods: strcpy, strcat, strcmp  

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "World";
    
    // Compare str1 and str2
    // int result = strcmp(str1, str2); //result = -1
    int result = strcmp(str3, str2); //result = 0
    printf("result: %d\n", result);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n"); // Displays: The strings are not equal.
    }
    return 0;
}