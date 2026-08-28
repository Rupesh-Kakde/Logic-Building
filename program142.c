/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkCapital
//  Input :         Character
//  Output :        BOOL
//  Description :   Accept a character
//                  and check whether
//                  it is a capital
//                  alphabet (A-Z) or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : F
//  Output : It is Capital Character
//
//  Input  : d
//  Output : It is not a Capital Character
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only one condition is checked.