/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : sumEvenOddDigits
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  calculate the sum of
//                  even digits and odd
//                  digits separately.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if((iDigit % 2) == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            num = num / 10;
        }

        System.out.println("Sum of even digits is : " + iEvenSum);
        System.out.println("Sum of odd digits is : " + iOddSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.sumEvenOddDigits(123456);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 123456
//  Output : Sum of even digits is : 12
//           Sum of odd digits is  : 9
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of digits
// in the given number.