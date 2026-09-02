/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountWhite
//  Input :         String
//  Output :        Integer
//  Description :   Accept a string
//                  from user and
//                  count the number
//                  of white spaces
//                  present in it.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous"
//  Output : 0
//
//  Input  : "Marvellous Infosystems"
//  Output : 1
//
//  Input  : "Marvellous Infosystems by Piyush Manohar Khairnar"
//  Output : 5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.