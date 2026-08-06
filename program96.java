/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : sumEvenNumbers
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  calculate the sum of
//                  all even numbers
//                  up to N.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println("Sum of even numbers is : " + iSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.sumEvenNumbers(10);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 10
//  Output : 30
//
//  Input  : 20
//  Output : 110
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses from 1 to N and checks every number.