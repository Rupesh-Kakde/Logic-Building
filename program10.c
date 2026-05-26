/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkEven
//  Input :         int
//  Output :        BOOL
//  Description :   Accept one number and check whether
//                  the number is Even or Odd.
//                  Return TRUE if even otherwise FALSE.
//  Date :          24/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{

    if((iNo % 2) == 0)
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

    bRet = ChkEven(iValue);

    
    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 10
//  output : Number is Even
//
//  input  : 15
//  output : Number is Odd
//
//////////////////////////////////////////////////////////////////////////////////
