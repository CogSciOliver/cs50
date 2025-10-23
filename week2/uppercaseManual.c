#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string s = get_string("Before: ");
  printf("After:  ");
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    if (s[i] >= 'a' && <= 'z')
    {
      //Chang the letter to uppercase manually by subtracting 32 from the ascii int representation 
      // all letters are 32 distanced from upper and lower cases. 
      printf("%c", s[i] - 32); //Manual 
      //or  printf("%c", s[i] - ('a' - 'A') ); <-- same difference 
      printf("%c", toupper(s[i])); //Auto generate from an exisiting library DRY 
    }
    else
    {
      //Print s[i]
      printf("%c", s[i]);
    }
  }
  printf("\n");
}

// TO RUN THIS PROGRAM 
// IN THE TERMINAL, TYPE 
// make uppercaseManual
// ./uppercaseManual
// TYPE A STRING IN THE PROMPT "Before"
