/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactDiff
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return difference
//                  between summation of factors and
//                  summation of non factors.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12
//  output : -34
//
//  input  : 10
//  output : -29
//
//////////////////////////////////////////////////////////////////////////////////