/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkPerfect
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  check whether it is
//                  a perfect number
//                  or not.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt < num; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == num)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not a Perfect Number");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkPerfect(6);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 6
//  Output : Perfect Number
//
//  Input  : 10
//  Output : Not a Perfect Number
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop checks all numbers from 1 to (N - 1).