/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Count
//  Input :         int
//  Output :        int
//  Description :   Accept one number and count
//                  frequency of digits which are
//                  less than 6.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : 3
//
//  input  : 1018
//  output : 3
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is the number of digits in the given number.
// The loop processes one digit at a time.
