/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Input :         String
//  Output :        Integer
//  Description :   Accept a string
//                  from user and
//                  return the
//                  difference between
//                  frequency of small
//                  and capital
//                  characters.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous"
//  Output : 6
//
//  Input  : "HELLO"
//  Output : -5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.