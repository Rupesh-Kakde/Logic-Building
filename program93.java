/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkDivisible
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  check whether it is
//                  divisible by both
//                  5 and 11.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkDivisible(int num)
    {
        if((num % 5 == 0) && (num % 11 == 0))
        {
            System.out.println("Number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not divisible by 5 and 11");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkDivisible(55);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 55
//  Output : Number is divisible by 5 and 11
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Only a fixed number of arithmetic operations and comparisons are performed.