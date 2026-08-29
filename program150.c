/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         Character
//  Output :        void
//  Description :   Accept a character
//                  and display its
//                  ASCII value in
//                  Decimal, Octal
//                  and Hexadecimal
//                  format.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : %04o\n", ch);
    printf("Hexadecimal  : 0X%X\n", ch);
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
//  Input  : A
//
//  Output : Decimal      : 65
//           Octal        : 0101
//           Hexadecimal  : 0X41
//
//  Input  : a
//
//  Output : Decimal      : 97
//           Octal        : 0141
//           Hexadecimal  : 0X61
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Only three print statements are executed.