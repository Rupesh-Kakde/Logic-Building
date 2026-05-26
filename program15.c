/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkVowel
//  Input :         char
//  Output :        BOOL
//  Description :   Accept one character and check whether
//                  it is vowel or not.
//                  Return TRUE if vowel otherwise FALSE.
//  Date :          25/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') ||
       (cValue == 'i') || (cValue == 'o') ||
       (cValue == 'u') || (cValue == 'A') ||
       (cValue == 'E') || (cValue == 'I') ||
       (cValue == 'O') || (cValue == 'U'))
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

    printf("Enter character\n");

    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}



