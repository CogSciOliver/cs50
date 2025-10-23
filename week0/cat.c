#include <cs50.h>
#include <stdio.h>

// ----- declaration it (this function) will exisit -----
int get_positive_int(void);
void meow(int n);

//main program
int main(void)
{
    //int n = get_int("Pick a number:__\n");

    int times = get_positive_int();
    meow(times);
}

// ----- definitions -----
int get_positive_int(void)
{
    //user input loop
    int n;
    do
    {
        n = get_int("Pick a number:__\n");
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow %i\n", i);
    }
}
