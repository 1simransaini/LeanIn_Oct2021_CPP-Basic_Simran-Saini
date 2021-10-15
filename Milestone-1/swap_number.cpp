#include<iostream>
using namespace std;
 
 int main()
 {
   int x, y, temp;
   cout<< "Enter value of 'x' ";
   cin>>x;
   
   cout<< "Enter value of 'y' ";
   cin>>y;
   
   /*Swapping logic */ temp=x;
   x=y;
   y=temp;
   
   cout<<"Value of 'x' after swapping"<<endl<<x<<endl;
   
   cout<<"Value of 'y'after swapping"<<endl<<y<<endl;
   
   return 0;
 }

/*Enter value of 'x' 5
Enter value of 'y' 4
Value of 'x' after swapping
4
Value of 'y'after swapping
5*/
