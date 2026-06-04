/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print pattern
//                  of '$' and '*' on screen.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : $ * $ * $ * $ * $ *
//
//  input  : 3
//  output : $ * $ *
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N