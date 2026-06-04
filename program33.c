/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenFactorial
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return
//                  multiplication of all even numbers
//                  from 1 to that number.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) == 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : 8
//
//  input  : 10
//  output : 3840
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N