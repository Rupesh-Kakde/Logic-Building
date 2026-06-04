/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : PrintEven
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print that many
//                  even numbers on screen.
//  Date :          25/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;

    if(iNo <= 0)
    {
        return;
    }

    // Logic
    while(iCnt <= iNo)
    {
        printf("%d\t", iCnt * 2);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 7
//  output : 2 4 6 8 10 12 14
//
//  input  : 5
//  output : 2 4 6 8 10
//
//////////////////////////////////////////////////////////////////////////////////
