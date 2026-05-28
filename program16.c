/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : MultFact
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return multiplication
//                  of all factors of that number.
//  Date :          26/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i) == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 12
//  output : 144
//
//  input  : 10
//  output : 10
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N/2)
// Where N >= 0
// Because loop iterates from 1 to N/2