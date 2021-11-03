/*C++ program to print the following pattern
*
**
***
****
*****   */


#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i=1,j;
    do
    {
        j=1;
        do
        {
            cout << "*";
            j++;
        }while(j <= i);
        i++;
        cout << endl;
    }while(i <= 5);
    getch();
    return 0;
}

/*Output
*
**
***
****
*****     */ 
