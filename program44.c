/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : MultDigits
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return
//                  multiplication of all non-zero digits.
//  Date :          28/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : 270
//
//  input  : 1018
//  output : 8
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is number of digits in the number
// Because loop processes one digit at a time