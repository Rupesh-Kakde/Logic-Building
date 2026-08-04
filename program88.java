/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printOddNumbers
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display all odd
//                  numbers up to N.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.print(iCnt + "\t");
            }
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printOddNumbers(20);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 20
//  Output : 1 3 5 7 9 11 13 15 17 19
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// The loop traverses from 1 to N.