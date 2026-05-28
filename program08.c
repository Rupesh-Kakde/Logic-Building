/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int
//  Output :        None
//  Description :   Accept one number and check whether it is less than 10.
//                  Print "Hello" if number is less than 10,
//                  otherwise print "Demo".
//  Date :          24/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}




//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 7
//  output : Hello
//
//  input  : 15
//  output : Demo
//
//////////////////////////////////////////////////////////////////////////////////
