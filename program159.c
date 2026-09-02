/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Input :         String
//  Output :        void
//  Description :   Accept a string
//                  from user and
//                  display only
//                  digits from
//                  that string.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    DisplayDigit(arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : "marve89llous121"
//  Output : 89121
//
//  Input  : "Demo"
//  Output :
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses the complete string once.