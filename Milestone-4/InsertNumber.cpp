//C++ using function to Insert a no. at a given position in an array
#include <iostream>
using namespace std;
int main()
{
   int array[100], position, c, n, value;
   cout<<"Enter number of elements in array=\n"<<endl;
   cin>>n;
   cout<<"Enter elements=\n"<<endl;
   for (c = 0; c < n; c++)
   {
   cin>>array[c];
    }
   cout<<"Enter the location to insert an element=\n"<<endl;
   cin>>position;
   cout<<"Enter the value to insert=\n"<<endl;
   cin>>value;
   for (c = n - 1; c >= position - 1; c--)
   {
  array[c+1] = array[c];
    }
	array[position-1] = value;
    cout<<"Resultant array is=\n"<<endl;
   for (c = 0; c <= n; c++)
   {
      cout<<array[c]; 
         }
   return 0;
}
/*Enter number of elements in array=

5
Enter elements=

1
4
6
7
8
Enter the location to insert an element=

3
Enter the value to insert=

0
Resultant array is=

140678
*/
