/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         Integer Array, Integer
//  Output :        void
//  Description :   Accept N numbers and display
//                  all such elements which are
//                  divisible by 3 and 5.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
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

    Display(p, iSize);

    free(p);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input :  N : 6
//           Elements : 85 66 3 15 93 88
//
//  Output : 15
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of elements in the array.
// The loop traverses each element exactly once.