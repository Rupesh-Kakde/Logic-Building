/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Number
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display
//                  Small, Medium or Large according
//                  to given conditions.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Number(int iNo)
{
   
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 25
//  output : Small
//
//  input  : 75
//  output : Medium
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only conditional statements are used