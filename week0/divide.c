#include <cs50.h>
#include <stdio.h>

// declaration of custom functions

// main executable program
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("Your Answer is = %f\n", (float) x / y);
}

