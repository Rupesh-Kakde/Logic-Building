/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : MultipleDisplay
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print first
//                  5 multiples of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

   
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 4
//  output : 4 8 12 16 20
//
//  input  : 3
//  output : 3 6 9 12 15
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because loop runs fixed 5 times