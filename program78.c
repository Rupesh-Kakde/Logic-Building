/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Input :         Integer Array, Integer
//  Output :        Integer
//  Description :   Accept N numbers and
//                  return the difference
//                  between largest and
//                  smallest element.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return (iMax - iMin);
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

    iRet = Difference(p, iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 6
//           Elements : 85 66 3 66 93 88
//
//  Output : 90
//           (93 - 3)
//
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
//
// The array is traversed exactly once.