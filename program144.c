/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkSmall
//  Input :         Character
//  Output :        BOOL
//  Description :   Accept a character
//                  and check whether
//                  it is a small case
//                  alphabet (a-z) or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : g
//  Output : It is Small case Character
//
//  Input  : D
//  Output : It is not a Small case Character
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only one condition is checked.