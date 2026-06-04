/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Input :         float, float
//  Output :        double
//  Description :   Accept width and height of rectangle
//                  and calculate its area.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    
    dArea = fWidth * fHeight;   

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5.3 9.78
//  output : 51.834
//
//  input  : 10.5 4.0
//  output : 42.000
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only one multiplication operation is performed