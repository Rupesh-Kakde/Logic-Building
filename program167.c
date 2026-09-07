/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrNCpyX
//  Input :         Source String, Destination String, Integer
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  copy first N
//                  characters into
//                  another string.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt > 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr, brr, 10);

    printf("%s\n", brr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS", 10
//  Output : "Marvellous"
//
//  Input  : "Hello", 3
//  Output : "Hel"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop copies at most N characters.