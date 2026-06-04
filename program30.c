/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : TableRev
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display
//                  table of that number in reverse order.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2
//  output : 20 18 16 14 12 10 8 6 4 2
//
//  input  : 5
//  output : 50 45 40 35 30 25 20 15 10 5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because loop runs fixed 10 times