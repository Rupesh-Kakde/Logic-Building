/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input :         int
//  Output :        None
//  Description :   Accept one number and print all even
//                  factors of that number.
//  Date :          25/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayFactor(int iNo)
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

    DisplayFactor(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 24
//  output : 2 4 6 8 12
//
//  input  : 18
//  output : 2 6
//
//////////////////////////////////////////////////////////////////////////////////