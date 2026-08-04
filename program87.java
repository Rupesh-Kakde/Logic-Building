/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printEvenNumbers
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display all even
//                  numbers up to N.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) == 0)
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

        obj.printEvenNumbers(20);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 20
//  Output : 2 4 6 8 10 12 14 16 18 20
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop traverses from 1 to N.