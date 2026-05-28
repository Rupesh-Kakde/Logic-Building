/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : NonFact
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display all
//                  non factors of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
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

    NonFact(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12
//  output : 5 7 8 9 10 11
//
//  input  : 10
//  output : 3 4 6 7 8 9
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N >= 0
// Because loop iterates from 1 to N-1