/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : displayGrade
//  Input :         Integer
//  Output :        void
//  Description :   Accept marks and
//                  display the grade
//                  according to the
//                  obtained marks.
//  Date :          22/06/2026
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Logic
{
    void displayGrade(int marks)
    {
        if((marks >= 75) && (marks <= 100))
        {
            System.out.println("Distinction");
        }
        else if((marks >= 65) && (marks < 75))
        {
            System.out.println("First Class");
        }
        else if((marks >= 55) && (marks < 65))
        {
            System.out.println("Second Class");
        }
        else if((marks >= 35) && (marks < 55))
        {
            System.out.println("Pass Class");
        }
        else if((marks >= 0) && (marks < 35))
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid Marks");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.displayGrade(82);
    }
}


//////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 82
//  Output : Distinction
//
//  Input  : 68
//  Output : First Class
//
//  Input  : 48
//  Output : Pass Class
//
//////////////////////////////////////////////////////////////////////////////////


// Time Complexity : O(1)
// Only a fixed number of  comparisons are performed.