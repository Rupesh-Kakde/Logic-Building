/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkPrime
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  check whether it is
//                  prime or not.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;
        boolean bFlag = true;

        if(num <= 1)
        {
            bFlag = false;
        }

        for(iCnt = 2; iCnt < num; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("Number is Prime");
        }
        else
        {
            System.out.println("Number is not Prime");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkPrime(11);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 11
//  Output : Number is Prime
//
//  Input  : 12
//  Output : Number is not Prime
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// The loop may execute from 2 to (N - 1) in the worst case.