/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display even
//                  numbers in odd rows
//                  and odd numbers in
//                  even rows.
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
        if((i % 2) != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",j * 2);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",(j * 2) - 1);
            }
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
//  Input  : iRow = 4   iCol = 5
//  Output : 2   4   6   8   10
//           1   3   5   7   9
//           2   4   6   8   10
//           1   3   5   7   9
//
//  Input  : iRow = 2   iCol = 4
//  Output : 2   4   6   8
//           1   3   5   7
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes iCol times.