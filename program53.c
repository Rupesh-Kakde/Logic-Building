/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeSum
//  Input :         int, int
//  Output :        int
//  Description :   Accept starting and ending points
//                  of a positive range and return
//                  addition of all numbers in that range.
//  Date :          04/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    
    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 23 30
//  output : 212
//
//  input  : 10 18
//  output : 126
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(End - Start + 1)
// Where Start >= 0 and Start <= End
// Because loop visits every number in the range once