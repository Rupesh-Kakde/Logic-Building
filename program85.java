/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : printTable
//  Input :         Integer
//  Output :        void
//  Description :   Accept a number and
//                  display its multiplication
//                  table from 1 to 10.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.print(num * iCnt + "\t");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printTable(5);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 5 10 15 20 25 30 35 40 45 50
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// The loop executes exactly 10 times,
// irrespective of the input value.