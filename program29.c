/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Table
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display
//                  table of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

void Table(int iNo)
{
    int i = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2
//  output : 2 4 6 8 10 12 14 16 18 20
//
//  input  : 5
//  output : 5 10 15 20 25 30 35 40 45 50
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because loop runs fixed 10 times