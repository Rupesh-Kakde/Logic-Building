/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountCapital
//  Input :         String
//  Output :        Integer
//  Description :   Accept a string
//                  from user and
//                  count the number
//                  of capital
//                  characters.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(arr);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS"
//  Output : 4
//
//  Input  : "HELLO"
//  Output : 5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.