/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : displayFactors
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display all factors
//                  of that number.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void displayFactors(int num)
    {
        int iCnt = 0;

        System.out.println("Factors are : ");

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if((num % iCnt) == 0)
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

        obj.displayFactors(12);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 12
//  Output : 1 2 3 4 6 12
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// The loop executes from 1 to N.