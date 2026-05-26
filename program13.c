/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayEvenFactor
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print only
//                  even factors of that number.
//  Date :          25/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 36
//  output : 2 6 12 18
//
//  input  : 24
//  output : 2 4 6 8 12
//
//////////////////////////////////////////////////////////////////////////////////
