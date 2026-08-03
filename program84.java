/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : findMin
//  Input :         Integer, Integer, Integer
//  Output :        void
//  Description :   Accept three numbers and
//                  display the minimum
//                  number among them.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMin(int a, int b, int c)
    {
        if((a <= b) && (a <= c))
        {
            System.out.println("Minimum number is : " + a);
        }
        else if((b <= a) && (b <= c))
        {
            System.out.println("Minimum number is : " + b);
        }
        else
        {
            System.out.println("Minimum number is : " + c);
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.findMin(3, 7, 2);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 3 7 2
//  Output : 2
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)
// Only a fixed number of comparisons  are performed.