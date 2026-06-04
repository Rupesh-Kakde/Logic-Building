/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factorial
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return
//                  factorial of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : 120
//
//  input  : 4
//  output : 24
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N