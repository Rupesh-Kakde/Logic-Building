/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Input :         int
//  Output :        void
//  Description :   Accept one number and display
//                  its digits in reverse order.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : 5 9 3 2
//
//  input  : 1018
//  output : 8 1 0 1
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is number of digits in the number
// Because loop processes one digit at a time