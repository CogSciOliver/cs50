#include <cs50.h>
#include <stdio.h>

void print_space(int space);
void print_row(int bricks);
void print_gap(int gap);
void print_double(int bricks);

int main(void)
{
    // Print pyramid left algined
    int height;
    do
    {
        height = get_int("Pyramid height bewtween 1 through 8? ");
    }
    while (height < 1); // ALLOWS INFINITE HEIGHT POSITIVE

    // Now Make Pyramid =
    for (int i = 0; i < height; i++)
    {
        if (height < 1 || height < 9)
        {
            print_space(height - i - 1);
            print_row(i + 1);
            print_gap(2);
            print_double(i + 1);
        }
        else if (height < 0 || height > 8)
        {
            height = get_int(
                "\nSorry '%i' is of out of range.\n->Pyramid height can only be 1 through 8? ",
                height);
        }
    }
}
void print_space(int space)
{
    for (int s = 0; s < space; s++)
    {
        printf(" ");
    }
}
void print_row(int bricks)
{
    for (int r = 0; r < bricks; r++)
    {
        printf("#");
    }
}
void print_gap(int gap)
{
    for (int g = 0; g < gap; g++)
    {
        printf(" ");
    }
}
void print_double(int bricks)
{
    for (int b = 0; b < bricks; b++)
    {
        printf("#");
    }
    printf("\n");
}

// TO RUN TYPE IN THE TERMINAL
// make marioGap
// ./marioGap