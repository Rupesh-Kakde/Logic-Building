/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : SquareMeter
//  Input :         int
//  Output :        double
//  Description :   Accept area in square feet and
//                  convert it into square meter.
//                  1 Square Feet = 0.0929 Square Meter
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    
    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : 0.4645
//
//  input  : 7
//  output : 0.6503
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only one multiplication operation is performed