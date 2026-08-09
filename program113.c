/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display numbers
//                  in reverse order.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : iRow = 3   iCol = 5
//  Output : 5   4   3   2   1
//           5   4   3   2   1
//           5   4   3   2   1
//
//  Input  : iRow = 2   iCol = 4
//  Output : 4   3   2   1
//           4   3   2   1
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes iCol times.