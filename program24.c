/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OddDisplay
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print all
//                  odd numbers up to that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    
    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) != 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 18
//  output : 1 3 5 7 9 11 13 15 17
//
//  input  : 10
//  output : 1 3 5 7 9
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N