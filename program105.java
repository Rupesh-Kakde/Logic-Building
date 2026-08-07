/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printDivisibleBy2and3
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number N and
//                  display all numbers
//                  between 1 and N that
//                  are divisible by both
//                  2 and 3.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printDivisibleBy2and3(int n)
    {
        int iCnt = 0;

        System.out.println("Numbers divisible by 2 and 3 are : ");

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
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

        obj.printDivisibleBy2and3(30);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 30
//  Output : 6 12 18 24 30
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// The loop executes from  1 to N.