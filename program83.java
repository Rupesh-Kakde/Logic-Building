/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : findMax
//  Input :         Integer, Integer
//  Output :        void
//  Description :   Accept two numbers and
//                  display the maximum
//                  number among them.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void findMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println("Maximum number is : " + a);
        }
        else
        {
            System.out.println("Maximum number is : " + b);
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.findMax(20, 15);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 20 15
//  Output : 20
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Only one comparison operation is performed.