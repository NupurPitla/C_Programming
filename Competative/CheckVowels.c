// Question: Accept one character from user and check whether that character is vowel (a, e, i, o, u) or not.

// Input: e
// Output: False

// Input: E
// Output: True

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 2

BOOL ChkVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }

}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter Character: \n");
  scanf("%c", &cValue);

  bRet = ChkVowel(cValue);

  if(bRet == TRUE)
  {
    printf("It is Vowel\n");
  }
  else
  {
    printf("It is not Vowel\n");
  }

  return 0;
}
    