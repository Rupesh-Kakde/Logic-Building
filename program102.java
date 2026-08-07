/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : countEvenOddRange
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number N and
//                  count how many even
//                  and odd numbers are
//                  present between
//                  1 and N.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
        }

        System.out.println("Even Numbers Count : " + iEvenCnt);
        System.out.println("Odd Numbers Count : " + iOddCnt);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.countEvenOddRange(50);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 10
//  Output : Even Numbers Count : 5
//           Odd Numbers Count  : 5
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop executes N times.