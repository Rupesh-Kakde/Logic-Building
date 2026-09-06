/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrCpyX
//  Input :         Source String, Destination String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  copy its contents
//                  into another
//                  string.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s\n", brr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous Multi OS"
//
//  Output : "Marvellous Multi OS" (Copied into another string)
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete source string once.