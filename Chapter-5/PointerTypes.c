#include <stdio.h>

int main(void)
{
    int i;  // i's type is "int"
    int *p; // p's type is "pointer to an int", or "int-pointer"

    // p is a pointer, but is uninitialized and points to garbage

    p = &i; // p is assigned the address of i -- p now "points to" i

    return 0;
}