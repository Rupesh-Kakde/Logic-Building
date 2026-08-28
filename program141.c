/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkAlpha
//  Input :         Character
//  Output :        BOOL
//  Description :   Accept a character
//                  and check whether
//                  it is an alphabet
//                  (A-Z or a-z) or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : F
//  Output : It is Character
//
//  Input  : &
//  Output : It is not a Character
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only one condition is checked.