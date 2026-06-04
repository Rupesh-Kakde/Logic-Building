/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkZero
//  Input :         int
//  Output :        BOOL
//  Description :   Accept one number and check
//                  whether it contains digit 0
//                  or not.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : There is no Zero
//
//  input  : 1018
//  output : It Contains Zero
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is number of digits in the number
// Because loop checks one digit at a time