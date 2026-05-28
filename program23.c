/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print its
//                  number line from negative to positive.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    
    for(i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
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
//  input  : 4
//  output : -4 -3 -2 -1 0 1 2 3 4
//
//  input  : 3
//  output : -3 -2 -1 0 1 2 3
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(2N + 1)
// Where N >= 0
// Because loop iterates from -N to +N