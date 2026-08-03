/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : sumOfDigits
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  calculate the sum
//                  of all its digits.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



class Logic
{
    void sumOfDigits(int num)
    {
        int digit = 0;
        int sum = 0;

        if(num < 0)
        {
            num = -num;
        }

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        System.out.println("Sum of digits is : " + sum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.sumOfDigits(1234);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 1234
//  Output : 10
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(D)
// D = Number of digits in the number.
// Each digit is processed exactly once.