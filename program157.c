/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : struprx
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  convert it into
//                  upper case.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    struprx(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS"
//  Output : "MARVELLOUS MULTI OS"
//
//  Input  : "hello"
//  Output : "HELLO"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.