/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkPalindrome
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  check whether it is
//                  palindrome or not.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void checkPalindrome(int num)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = num;

        if(num < 0)
        {
            num = -num;
            iTemp = num;
        }

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }

        if(iTemp == iRev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not Palindrome");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkPalindrome(121);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 121
//  Output : Number is Palindrome.
//
//  Input  : 123
//  Output : Number is not Palindrome
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(D)
// D = Number of digits in the number.
// Each digit is processed exactly once.