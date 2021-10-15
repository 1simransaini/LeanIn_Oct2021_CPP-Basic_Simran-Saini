#include <iostream>
using namespace std;

int main()
{
    int dividend;
    int divisor;
    int quotient;
    int remainder;
  
    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
  
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}

/*Enter dividend: 20
Enter divisor: 10
Quotient = 2
Remainder = 0*/
