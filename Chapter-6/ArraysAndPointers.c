#include <stdio.h>

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0];  // p points to the array
                // Well, to the first element, actually

    printf("%d\n", *p); // Prints "11"

    int *p2;

    p2 = a; // Same as p = &a[0];

    printf("%d\n", *p2); // Prints "11"
}