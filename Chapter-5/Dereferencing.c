#include <stdio.h>

int main(void)
{
    int i;
    int *p; // this is NOT a derference -- this is a type "int*"

    p = &i;

    i = 10;
    *p = 20;

    printf("i is %d\n", i);
    printf("i is %d\n", *p);
}