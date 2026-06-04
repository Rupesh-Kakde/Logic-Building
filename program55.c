/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev
//  Input :         int, int
//  Output :        void
//  Description :   Accept starting and ending points
//                  and display all numbers in that
//                  range in reverse order.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 23 35
//  output : 35 34 33 32 31 30 29 28 27 26 25 24 23
//
//  input  : 10 18
//  output : 18 17 16 15 14 13 12 11 10
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(End - Start + 1)
// Where Start <= End
// Because loop prints every number in the range once
