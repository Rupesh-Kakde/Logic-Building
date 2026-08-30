/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkVowel
//  Input :         String
//  Output :        BOOL
//  Description :   Accept a string
//                  from user and
//                  check whether
//                  it contains
//                  any vowel or not.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
           (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "marvellous"
//  Output : Contains Vowel
//
//  Input  : "Demo"
//  Output : Contains Vowel
//
//  Input  : "xyz"
//  Output : There is no Vowel
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the string until a vowel is found or the string ends.