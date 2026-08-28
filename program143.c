/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkDigit
//  Input :         Character
//  Output :        BOOL
//  Description :   Accept a character
//                  and check whether
//                  it is a digit
//                  (0-9) or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 7
//  Output : It is Digit
//
//  Input  : d
//  Output : It is not a Digit
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only one condition is checked.