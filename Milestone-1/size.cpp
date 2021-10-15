#include <iostream>
using namespace std;
  
int main() 
{ 
    int integerType; 
    char charType; 
    float floatType; 
    double doubleType;
  
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
  
   return 0;
}

/*Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte*/
