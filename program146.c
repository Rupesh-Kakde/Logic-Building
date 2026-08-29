/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayASCII
//  Input :         None
//  Output :        void
//  Description :   Display ASCII table
//                  containing Symbol,
//                  Decimal,
//                  Hexadecimal and
//                  Octal values from
//                  0 to 255.
//  Author :        Rupesh Suresh Kakde
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("------------------------------------------------------------\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n",i,i,i,i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Output : Displays ASCII table
//           Symbol   Decimal   Hexadecimal   Octal
//           ...
//           A        65        41            101
//           B        66        42            102
//           ...
//           a        97        61            141
//           ...
//
//////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(256)
// The loop executes 256 times.