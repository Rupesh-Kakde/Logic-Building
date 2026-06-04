/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FhtoCs
//  Input :         float
//  Output :        double
//  Description :   Accept temperature in Fahrenheit
//                  and convert it into Celsius.
//  Date :          28/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    
    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 10
//  output : -12.2222
//
//  input  : 34
//  output : 1.1111
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only arithmetic operations are performed