/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept number of rows
//                  and columns from user
//                  and display
//                  uppercase and
//                  lowercase alphabets
//                  alternately.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            for(ch = 'A'; ch < ('A' + iCol); ch++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(ch = 'a'; ch < ('a' + iCol); ch++)
            {
                printf("%c\t",ch);
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
//  Input  : iRow = 4   iCol = 4
//  Output : A   B   C   D
//           a   b   c   d
//           A   B   C   D
//           a   b   c   d
//
//  Input  : iRow = 3   iCol = 5
//  Output : A   B   C   D   E
//           a   b   c   d   e
//           A   B   C   D   E
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(iRow * iCol)
// The outer loop executes iRow times and
// the inner loop executes iCol times.