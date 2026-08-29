/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkSpecial
//  Input :         Character
//  Output :        BOOL
//  Description :   Accept a character
//                  and check whether
//                  it is a special
//                  symbol or not.
//                  (!, @, #, $, %,
//                  ^, &, *)
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : %
//  Output : It is Special Character
//
//  Input  : d
//  Output : It is not a Special Character
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only a fixed number of conditions are checked.