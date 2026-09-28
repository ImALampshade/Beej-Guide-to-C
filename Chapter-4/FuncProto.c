#include <stdio.h>

int foo(void);  // This is the prototype!

int main()
{
    int i;

    // We can call foo() here before it's definition because the
    // prototype has already been declared, above!

    i = foo();

    printf("i = %d\n", i);  //3490

    return 0;
}

int foo (void)  // This is the definition, just like the prototype!
{
    return 3490;
}