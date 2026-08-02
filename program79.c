/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Digits
//  Input :         Integer Array, Integer
//  Output :        void
//  Description :   Accept N numbers and
//                  display all elements
//                  which contain exactly
//                  3 digits.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if((iNo >= 100) && (iNo <= 999))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 6
//           Elements : 8225 665 3 76 953 858
//
//  Output : 665 953 858
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
//
// The array is traversed exactly once.