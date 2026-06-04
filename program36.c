/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CircleArea
//  Input :         float
//  Output :        double
//  Description :   Accept radius of circle and
//                  calculate area of circle.
//                  Consider PI as 3.14.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    
    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5.3
//  output : 88.2026
//
//  input  : 10.4
//  output : 339.6224
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only arithmetic operations are performed