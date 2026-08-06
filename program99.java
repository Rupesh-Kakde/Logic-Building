/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : findLargestDigit
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  find the largest
//                  digit from it.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findLargestDigit(int num)
    {
        int iDigit = 0;
        int iMax = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Largest digit is : " + iMax);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.findLargestDigit(83429);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 83429
//  Output : 9
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of digits in the given number.