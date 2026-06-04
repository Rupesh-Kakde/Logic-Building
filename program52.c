#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Input :         int, int
//  Output :        void
//  Description :   Accept starting and ending points
//                  and display all even numbers
//                  between that range.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 23 35
//  output : 24 26 28 30 32 34
//
//  input  : 10 18
//  output : 10 12 14 16 18
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(End - Start + 1)
// Where Start <= End
// Because loop checks every number in the given range