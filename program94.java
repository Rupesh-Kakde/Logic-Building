/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printDigits
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display each digit
//                  separately.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void printDigits(int num)
    {
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            System.out.println(iDigit);

            num = num / 10;
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printDigits(9876);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 9876
//  Output : 6
//           7
//           8
//           9
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is the number of digits in the given number.