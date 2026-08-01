/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : LastOcc
//  Input :         Integer Array, Integer, Integer
//  Output :        Integer
//  Description :   Accept N numbers and one
//                  another number as NO and
//                  return index of last
//                  occurrence of that NO.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
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
//  Output : 3
//
//  Input :  N : 6
//           NO : 93
//           Elements : 85 66 3 66 93 88
//
//  Output : 4
//
//////////////////////////////////////////////////////////////////////////////////
