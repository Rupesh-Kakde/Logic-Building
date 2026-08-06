/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printReverse
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display numbers from
//                  N down to 1 in
//                  reverse order.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printReverse(int n)
    {
        int iCnt = 0;

        for(iCnt = n; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt + "\t");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printReverse(10);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 10
//  Output : 10 9 8 7 6 5 4 3 2 1
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop executes N times.