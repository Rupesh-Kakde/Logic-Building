/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplaySchedule
//  Input :         Character
//  Output :        void
//  Description :   Accept division from
//                  user and display
//                  examination timing.
//                  (Case Insensitive)
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7.00 AM");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : C
//  Output : Your exam at 9.20 AM
//
//  Input  : d
//  Output : Your exam at 10.30 AM
//
//  Input  : X
//  Output : Invalid Division
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// As only a fixed number of conditions are checked.