#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void print_space(int space);

int main(void)
{
    // Print pyramid left algined
    int height;
    do
    {
        height = get_int("Pyramid height? ");
    }
    while (height < 1);

    // Now Make Pyramid =
    for (int i = 0; i < height; i++)
    {
        print_space(height - i - 1);
        print_row(i + 1);

    }
}
void print_space(int space)
{
    for (int k = 0; k < space; k++)
    {
        printf(" ");
    }
}
void print_row(int bricks)
{
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}


