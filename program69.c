/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Input :         Integer Array, Integer
//  Output :        Integer
//  Description :   Accept N numbers and return
//                  frequency of number 11
//                  from the array.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }

    return iFrequency;
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
//  Input :  N : 6
//           Elements : 85 66 3 15 93 88
//
//  Output : 0
//
//  Input :  N : 6
//           Elements : 85 11 3 15 11 111
//
//  Output : 2
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of elements in the array.
// The loop traverses each element exactly once.