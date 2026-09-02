/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strtogglex
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  toggle the case
//                  of each character.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS"
//  Output : "mARVELLOUS mULTI os"
//
//  Input  : "Hello123"
//  Output : "hELLO123"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.