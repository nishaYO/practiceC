#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    int *p = &x;
    int **pp = &p;
    int ***ppp = &pp;
    printf("value stored in x: %d\n", x);
    printf("value stored in *p: %p\n", (void *)p);
    printf("value stored in **pp: %p\n", (void *)*pp);
    printf("value stored in ***ppp: %p\n", (void *)**ppp);
    // output
    // value stored in x: 10
    // value stored in *p: 0061FF18
    // value stored in **pp: 0061FF18
    // value stored in ***ppp: 0061FF18
    printf("value via pointer p: %d\n", *p);
    printf("value via pointer pp: %d\n", **pp);
    printf("value via pointer ppp: %d\n", ***ppp);
    // value via pointer p: 10
    // value via pointer pp: 10
    // value via pointer ppp: 10

    return 0;
}
