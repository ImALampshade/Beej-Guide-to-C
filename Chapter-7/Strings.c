#include <stdio.h>

int main(void)
{
    // String Literals
    char s1[100] = "Hello, world!\n";
    char s2[100] = "This is a test.";
    char s3[100] = "When asked if this string had quotes in it, she replied, \"It does.\"";

    // String Variables
    char *s = "Hello, world!";

    printf("%s\n", s);
    printf("\n");

    // String Variables as Arrays
    char someString[14] = "Hello, world!";

    // or, if we were properly lazy and have the compiler
    // figure the length for us:

    char someString2[] = "Hello, world";

    return 0;
}