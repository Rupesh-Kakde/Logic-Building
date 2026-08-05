/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : calculatePower
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept base and
//                  exponent and calculate
//                  the power using loops.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0;
        int iPower = 1;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iPower = iPower * base;
        }

        System.out.println("Power is : " + iPower);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.calculatePower(2, 5);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : Base = 2, Exponent = 5
//  Output : 32
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(N)
// Where N is the value of exponent. The loop executes exponent times.