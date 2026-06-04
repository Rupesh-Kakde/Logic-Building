/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  Input :         char
//  Output :        None
//  Description :   Accept one character and convert its case.
//                  Lowercase → Uppercase
//                  Uppercase → Lowercase
//  Date :          25/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  input  : a
//  output : A
//
//  input  : D
//  output : d
//
//////////////////////////////////////////////////////////////////////////////////
