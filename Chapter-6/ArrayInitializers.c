#include <stdio.h>

#define COUNT 5

int main(void)
{
    int i;
    int a[5] = {22, 37, 3490, 18, 95};  // Initialize with these values

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    int j;
    int b[5] = {22, 37, 3490};  // Initialize with these values

    for (j = 0; j < 5; j++)
    {
        printf("%d\n", b[j]);
    }

    printf("\n");

    int k;
    int c[100] = {0};

    for (k = 0; k < 100; k++)
    {
        printf("%d, ", c[k]);
    }
    printf("\n");

    printf("\n");

    int l;
    int d[10] = {0, 11, 12, [5]=55, 66, 77};

    for (l = 0; l < 10; l++)
    {
        printf("%d\n", d[l]);
    }

    printf("\n");

    int m;
    int e[COUNT] = {[COUNT-3]=3, 2, 1};

    for (m = 0; m < COUNT; m++)
    {
        printf("%d\n", e[m]);
    }

    return 0;
}