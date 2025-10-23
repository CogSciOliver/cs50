#include <cs50.h>
#include <stdio.h>

void print_row(int n);
// main executable program
int main(void)
{
    //mario's targets
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    //mario's obsticles
    for (int i = 0; i < 3; i++)
    {
        printf(" #   #\n");
    }

    //mario's dungen
    for (int row = 0; row < 3; row++) //row can be i
    {
        const int n = 3;
        //simple long -> printf(" ####\n");
        /*for (int col = 0; col < 3; col++) //col can be j, then k, l in order for nesting
        {
            printf("#");

        }*/
        //Print n rows
        print_row(n);

        printf("\n");
    }
}


void print_row(int n)
{
    for (int i = 0; i < n; i++)
        {
            printf("#");

        }
}
