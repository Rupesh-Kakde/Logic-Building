/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number from
//                  user and display
//                  numbers in reverse
//                  order followed by #.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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
//  Output : 5   #   4   #   3   #   2   #   1   #
//
//  Input  : 3
//  Output : 3   #   2   #   1   #
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop executes N times.