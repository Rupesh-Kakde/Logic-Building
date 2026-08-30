/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Reverse
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  display it in
//                  reverse order.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(end >= start)
    {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "Marvellous"
//  Output : suollevraM
//
//  Input  : "HELLO"
//  Output : OLLEH
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// One traversal to reach the end and one traversal in reverse.