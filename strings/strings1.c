// Search for hostname using strstr

#include <string.h>
#include <stdio.h>

int main()
{
    const char *haystack = "GET /path/to/resource HTTP/1.1\nHost: www.example.com";
    const char *needle = "Host: ";

    const char *found = strstr(haystack, needle);
    if(found == NULL){
        printf("Substring %s not found in string %s\n", needle, haystack);
    }else{
        printf("Substring %s found in string %s at %p\n", needle, haystack, found);
    }

    return 0;
}