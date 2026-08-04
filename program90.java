/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkSign
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  check whether it is
//                  positive, negative,
//                  or zero.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative");
        }
        else
        {
            System.out.println("Number is Zero");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkSign(-8);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : -8
//  Output : Number is Negative
//
//  Input  : 15
//  Output : Number is Positive
//
//  Input  : 0
//  Output : Number is Zero
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(1)
// Only a fixed number of comparisons are performed.