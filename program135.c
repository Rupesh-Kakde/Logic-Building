/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display numbers
//                  from current row
//                  number to last
//                  column number.
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
        for(j = i; j <= iCol; j++)
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
//  Input  : iRow = 4   iCol = 4
//  Output : 1   2   3   4
//           2   3   4
//           3   4
//           4
//
//  Input  : iRow = 5   iCol = 5
//  Output : 1   2   3   4   5
//           2   3   4   5
//           3   4   5
//           4   5
//           5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes at most iCol times.