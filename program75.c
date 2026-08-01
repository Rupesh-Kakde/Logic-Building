/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Product
//  Input :         Integer Array, Integer
//  Output :        Integer
//  Description :   Accept N numbers and return
//                  product of all odd elements
//                  from the array.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult = 1;
    int iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
            iFlag = 1;
        }
    }

    if(iFlag == 0)
    {
        return 0;
    }

    return iMult;
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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 6
//           Elements : 15 66 3 70 10 88
//
//  Output : 45
//
//  Input :  N : 6
//           Elements : 44 66 72 70 10 88
//
//  Output : 0
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of elements in the array.
// The loop traverses each element exactly once.