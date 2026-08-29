/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         Character
//  Output :        void
//  Description :   Accept a character.
//                  If it is capital,
//                  display characters
//                  from it to Z.
//                  If it is small,
//                  display characters
//                  from it to a in
//                  reverse order.
//                  Otherwise return.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char c = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(c = ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
    }
    else
    {
        return;
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
//  Output : Q   R   S   T   U   V   W   X   Y   Z
//
//  Input  : m
//  Output : m   l   k   j   i   h   g   f   e   d   c   b   a
//
//  Input  : 8
//  Output : (No Output)
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(26)
// The loop executes at most 26 times.