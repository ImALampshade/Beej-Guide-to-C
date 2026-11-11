#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

int main(void)
{
    // Now with an initializer! Same field order as in the struct declaration:
    struct car saturn1 = {"Saturn SL/2", 16000.99, 175};

    printf("Name:      %s\n", saturn1.name);
    printf("Price:     %f\n", saturn1.price);
    printf("Top Speed: %d km\n", saturn1.speed);

    // Can also target specific variables:
    struct car saturn2 = {.speed = 175, .name = "Saturn SL/2"};

    return 0;
}