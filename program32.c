/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DollarToINR
//  Input :         int
//  Output :        int
//  Description :   Accept amount in US dollar and
//                  convert it into Indian Rupees.
//                  Consider 1 USD = 70 INR.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
    
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 10
//  output : 700
//
//  input  : 3
//  output : 210
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only one multiplication operation is performed