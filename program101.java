/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : productOfDigits
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  calculate the product
//                  of all digits from it.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void productOfDigits(int num)
    {
        int iDigit = 0;
        int iProduct = 1;

        while(num != 0)
        {
            iDigit = num % 10;
            iProduct = iProduct * iDigit;
            num = num / 10;
        }

        System.out.println("Product of digits is : " + iProduct);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.productOfDigits(234);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 234
//  Output : 24
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the number of digits in the given number.