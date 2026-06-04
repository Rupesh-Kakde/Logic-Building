/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : KMtoMeter
//  Input :         int
//  Output :        int
//  Description :   Accept distance in kilometre and
//                  convert it into meter.
//                  1 Kilometre = 1000 Meter
//  Date :          28/05/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    
    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  input  : 5
//  output : 5000
//
//  input  : 12
//  output : 12000
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Because only one multiplication operation is performed