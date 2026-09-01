/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strlwrx
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  convert it into
//                  lower case.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS"
//  Output : "marvellous multi os"
//
//  Input  : "HELLO"
//  Output : "hello"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.