#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string userName = get_string("What's your name? ");
    printf("hello, %s\n", userName);
}

// TO RUN TYPE IN THE TERMINAL
// make hello
// ./hello