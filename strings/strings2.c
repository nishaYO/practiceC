#include <string.h>
#include <stdio.h>

int main(){
    char str[] = "this, is, an, array, of, characters"; // str is the pointer to first char of hte string literal 
    const char* token = strtok(str, ", ");
    while(token!=NULL){
        printf("Token :%s\n", token);
        token = strtok(NULL, ", ");
    }
    return 0;
}