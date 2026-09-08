/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrCpyCap
//  Input :         Source String, Destination String
//  Output :        void
//  Description :   Copy only capital characters from source string
//                  into destination string.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
// Input  : "Marvellous Multi OS"
// Output : "MMOS"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)