/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkChar
//  Input :         String, Character
//  Output :        BOOL
//  Description :   Accept a string
//                  and a character
//                  from user and
//                  check whether
//                  the character is
//                  present in the
//                  string or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS", 'e'
//  Output : Character found
//
//  Input  : "Marvellous Multi OS", 'W'
//  Output : Character not found
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.