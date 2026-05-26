/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Divide
//  Input :         int , int
//  Output :        int
//  Description :   Perform division of two numbers and return result.
//                  If denominator is 0 then return -1.
//  Date :          23/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 15  5
//  output : 3
//
//////////////////////////////////////////////////////////////////////////////////
