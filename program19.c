/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return summation
//                  of all non factors of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12
//  output : 50
//
//  input  : 10
//  output : 37
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N-1