#include <stdio.h>

int plus_one(int n) // The "definition"
{
    return n + 1;
}

int main()
{
    int i = 10, j;

    j = plus_one(i); // The "call"

    printf("i(%d) + 1 is %d\n", i, j);

    return 0;
}