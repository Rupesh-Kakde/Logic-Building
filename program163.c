/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FirstChar
//  Input :         String, Character
//  Output :        Integer
//  Description :   Accept a string
//                  and a character
//                  from user and
//                  return the index
//                  of first
//                  occurrence of
//                  that character.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }

        iIndex++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS", 'M'
//  Output : 0
//
//  Input  : "Marvellous Multi OS", 'W'
//  Output : -1
//
//  Input  : "Marvellous Multi OS", 'e'
//  Output : 4
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the string until the first occurrence is found.