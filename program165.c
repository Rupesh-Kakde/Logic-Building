/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrRevX
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  reverse the
//                  string in place.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    StrRevX(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "abcd"
//  Output : "dcba"
//
//  Input  : "abba"
//  Output : "abba"
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses half of the string while swapping characters.