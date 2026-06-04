/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplay
//  Input :         int, int
//  Output :        void
//  Description :   Accept starting and ending points
//                  and display all numbers between
//                  that range.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

  
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 23 35
//  output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//
//  input  : 90 18
//  output : Invalid range
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(End - Start + 1)
// Where Start <= End
// Because loop executes once for every number in the range