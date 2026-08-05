/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : checkLeapYear
//  Input :         Integer
//  Output :        void
//  Description :   Accept a year and
//                  check whether it is
//                  a leap year or not.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not a Leap Year");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkLeapYear(2024);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 2024
//  Output : Leap Year
//
//  Input  : 2023
//  Output : Not a Leap Year
//////////////////////////////////////////////////////////////////////////////////

// Space Complexity : O(1)
// Only constant extra memory is used.