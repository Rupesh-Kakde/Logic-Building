/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : findSmallestDigit
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  find the smallest
//                  digit from it.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0;
        int iMin = 9;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Smallest digit is : " + iMin);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.findSmallestDigit(45872);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 45872
//  Output : 2
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Where N is the number of digits in the given number.