#include <cs50.h>
#include <stdio.h>

void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    // printf("meow slow\n");
    // printf("meow slow\n");
    // printf("meow slow\n");

    //While Loop
    int i = 3;
    while (i > 0)
    {
        i--;
       // printf("meow %i\n", i);
       meow();
    }

    //i = 0;
    while (i < 3)
    {
        i++;
        // printf("MEOW %i\n", i);
        meow();
    }

    //For Loop
    for (i = 0;  i < 3; i++)
    {
        // printf("Rawr!\n");
        meow();
    }

    //Forever Loop
    // while (true)
    // {
    //     i++;
    //     printf("Rawr! %i\n", i);
    // }
}
