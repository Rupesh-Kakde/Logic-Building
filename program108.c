/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number from
//                  user and display
//                  numbers from 1 to N
//                  followed by *.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 1   *   2   *   3   *   4   *   5   *
//
//  Input  : 3
//  Output : 1   *   2   *   3   *
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop executes N times.