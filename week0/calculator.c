#include <cs50.h>
#include <stdio.h>

// declaration of custom functions
void multiplyByTwo(void);

//Note
/*
int = 32 bits or stops at billions place
long = 64 bit or 64 places in a number
*/

// main executable program
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("Your Answer is = %i\n", x + y);

    multiplyByTwo();
}

void multiplyByTwo(void)
{
    int x = get_int("x: ");
    printf("multiplyByTwo, %x = %i\n", x, x * 2);
}
