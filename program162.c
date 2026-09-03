/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountChar
//  Input :         String, Character
//  Output :        Integer
//  Description :   Accept a string
//                  and a character
//                  from user and
//                  return the
//                  frequency of
//                  that character.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS", 'M'
//  Output : 2
//
//  Input  : "Marvellous Multi OS", 'W'
//  Output : 0
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.