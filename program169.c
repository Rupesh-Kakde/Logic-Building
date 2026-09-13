/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrCpySmall
//  Input :         Source String, Destination String
//  Output :        void
//  Description :   Copy only small characters from source string
//                  into destination string.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
// Input  : "Marvellous Multi OS"
// Output : "arvellousulti"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)