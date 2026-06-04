/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int , int
//  Output :        None
//  Description :   Accept one number and display that number
//                  according to given frequency.
//                  If frequency is negative then convert into positive.
//  Date :          24/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;

    
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12 5
//  output : 12 12 12 12 12
//
//////////////////////////////////////////////////////////////////////////////////
