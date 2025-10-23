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
      printf("%c", toupper(s[i])); //Auto generate removed all extra code from uppercaseManual.c 
  }
  printf("\n");
}

// TO RUN THIS PROGRAM 
// IN THE TERMINAL, TYPE 
// make uppercaseAuto
// ./uppercaseAuto
// TYPE A STRING IN THE PROMPT "Before"
