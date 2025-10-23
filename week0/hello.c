#include <cs50.h>
#include <stdio.h> //header file: access to the needed libraries aka collection of code someone else wrote for us.
// standard.io Libary => <stdio.h>
#include <time.h>


int main(void)
{
    printf("hello, world\n");
    printf("I am here to take over your \"biological and technological\" distinctiveness!\nResistance is Futile!\n");
    printf("July 15, 2025: Danii's First C Program!\n");
    printf("The time is now %li.\n", time(NULL));

    //get_string("What's your name? ")
    string answer = get_string("What's your name? ");
    printf("Good Bye, %s 💣💥\n", answer);
    //%s = placeholder for string variable only
    /*
    VARIABLE DATA TYPE
    %c = char not a string
    %f =
    %i =
    %li =
    %s = string
    = bool
    */
    printf("You have one chance to save your kind.\nAnswer correctly" );
    string answer = get_string("What's your name? ");
    printf("Good Bye, %s 💣💥\n", answer);
    int counter = 0;
    //counter = counter + 1;
    //counter += 1;
    counter ++ ; // plus 1
    counter -- ; // minus 1
}
