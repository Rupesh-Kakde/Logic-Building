/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountTwo
//  Input :         int
//  Output :        int
//  Description :   Accept one number and count
//                  frequency of digit 2 in it.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : 1
//
//  input  : 1018
//  output : 0
//
//////////////////////////////////////////////////////////////////////////////////#include <stdio.h>


// Time Complexity : O(N)
// Where N is the number of digits in the given number.
// The loop processes one digit at a time.