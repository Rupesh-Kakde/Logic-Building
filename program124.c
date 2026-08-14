/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display positive
//                  numbers in odd rows
//                  and negative numbers
//                  in even rows.
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
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%d\t",-j);
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
//  Input  : iRow = 5   iCol = 5
//  Output :  1   2   3   4   5
//           -1  -2  -3  -4  -5
//            1   2   3   4   5
//           -1  -2  -3  -4  -5
//            1   2   3   4   5
//
//  Input  : iRow = 4   iCol = 3
//  Output :  1   2   3
//           -1  -2  -3
//            1   2   3
//           -1  -2  -3
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes iCol times.