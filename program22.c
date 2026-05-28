/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print numbers
//                  from 1 till that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    
    for(i = 1; i <= iNo; i++)
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
//  input  : 8
//  output : 1 2 3 4 5 6 7 8
//
//  input  : 5
//  output : 1 2 3 4 5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N