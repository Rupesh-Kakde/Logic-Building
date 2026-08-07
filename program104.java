/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : countFactors
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  count total number
//                  of factors of that
//                  number.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int iFactorsCnt = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iFactorsCnt++;
            }
        }

        System.out.println("Total Factors are : " + iFactorsCnt);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.countFactors(20);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 20
//  Output : 6
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// The loop executes from  1 to N.