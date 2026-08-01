/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Input :         Integer Array, Integer, Integer
//  Output :        BOOL
//  Description :   Accept N numbers and one
//                  another number as NO and
//                  check whether NO is present
//                  in the array or not.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 6
//           NO : 66
//           Elements : 85 66 3 66 93 88
//
//  Output : TRUE
//
//  Input :  N : 6
//           NO : 12
//           Elements : 85 11 3 15 11 111
//
//  Output : FALSE
//
//////////////////////////////////////////////////////////////////////////////////


// Best Case Time Complexity : O(1)
// When NO is present at first position.
//
// Worst Case Time Complexity : O(N)
// Where N is the number of elements in the array.
//
// The loop may need to traverse all elements.