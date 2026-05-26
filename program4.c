/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Input :         int
//  Output :        BOOL
//  Description :   Check whether the entered number is divisible by 5.
//                  Return TRUE if divisible otherwise FALSE.
//  Date :          23/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 25
//  output : Divisible by 5
//
//  input  : 18
//  output : Not Divisible by 5
//
//////////////////////////////////////////////////////////////////////////////////
