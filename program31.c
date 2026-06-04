/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display
//                  '*' and '#' pattern.
//  Date :          27/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : * * * * * # # # # #
//
//  input  : 2
//  output : * * # #
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(2N)
// Where N >= 0
// Because two loops iterate from 1 to N