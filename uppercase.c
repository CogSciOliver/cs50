#include <cs50.h>
#include <studio.h>
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
      printf("%c", s[i] - 32);
    }
    else
    {
      //Print s[i]
      printf("%c", s[i]);
    }
  }
  printf("\n");
}
