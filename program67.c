/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Input :         Integer Array, Integer
//  Output :        Integer
//  Description :   Accept N numbers and return
//                  difference between frequency
//                  of even numbers and odd
//                  numbers.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }

    return (iEvenCnt - iOddCnt);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 7
//           Elements : 85 66 3 80 93 88 90
//
//  Output : 1
//           (4 - 3)
//
//  Even Numbers : 66 80 88 90
//  Odd Numbers  : 85 3 93
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of elements in the array.
// The loop traverses each element exactly once.