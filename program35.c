/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactorialDiff
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return
//                  difference between even factorial
//                  and odd factorial.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : -7
//
//  input  : 10
//  output : 2895
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N