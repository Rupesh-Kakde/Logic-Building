/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountSmall
//  Input :         String
//  Output :        Integer
//  Description :   Accept a string
//                  from user and
//                  count the number
//                  of small
//                  characters.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = CountSmall(arr);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous"
//  Output : 9
//
//  Input  : "HELLO"
//  Output : 0
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.