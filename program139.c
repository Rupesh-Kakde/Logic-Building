/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display stars on
//                  border and secondary
//                  diagonal, '#' on
//                  left side and '$'
//                  on right side.
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
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i + j == iCol + 1))
            {
                printf("*\t");
            }
            else if(i + j < iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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
//  Input  : iRow = 6   iCol = 6
//  Output : *   *   *   *   *   *
//           *   #   #   #   *   *
//           *   #   #   *   $   *
//           *   #   *   $   $   *
//           *   *   $   $   $   *
//           *   *   *   *   *   *
//
//  Input  : iRow = 4   iCol = 4
//  Output : *   *   *   *
//           *   #   *   *
//           *   *   $   *
//           *   *   *   *
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes iCol times.