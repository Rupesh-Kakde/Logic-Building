/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactRev
//  Input :         int
//  Output :        None
//  Description :   Accept one number and display its
//                  factors in decreasing order.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = iNo / 2; i >= 1; i--)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12
//  output : 6 4 3 2 1
//
//  input  : 10
//  output : 5 2 1
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N/2)
// Where N >= 0
// Because loop iterates from N/2 to 1