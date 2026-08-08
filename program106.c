/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number from
//                  user and display
//                  alphabets from A
//                  onwards.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = '\0';

    for(ch = 'A'; ch < ('A' + iNo); ch++)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : A   B   C   D   E
//
//  Input  : 3
//  Output : A   B   C
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop executes N times.
