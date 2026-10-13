#include <stdio.h>

// Passing as a pointer to the first element
void times2(int *a, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ", a[i] * 2);
    }
    printf("\n");
}

// Same thing, but using array notation
void times3(int a[], int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ", a[i] * 3);
    }
    printf("\n");
}

// Same thing, but using array notation with size
void times4(int a[5], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", a[i] * 4);
    }
    printf("\n");
}

int main(void)
{
    int x[5] = {11, 22, 33, 44, 55};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);
}