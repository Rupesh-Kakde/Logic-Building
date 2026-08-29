/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         Character
//  Output :        void
//  Description :   Accept a character
//                  and convert capital
//                  to small, small to
//                  capital. Display
//                  other characters
//                  as it is.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : Q
//  Output : q
//
//  Input  : m
//  Output : M
//
//  Input  : 4
//  Output : 4
//
//  Input  : %
//  Output : %
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only one condition is checked.