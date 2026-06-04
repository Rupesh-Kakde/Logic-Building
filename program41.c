/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Input :         int
//  Output :        int
//  Description :   Accept one number and return
//                  count of even digits from that number.
//  Date :          28/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 2395
//  output : 1
//
//  input  : 1018
//  output : 2
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is number of digits in the number
// Because loop processes one digit at a time