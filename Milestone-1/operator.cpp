#include<iostream>

using namespace std;
 
 int main()
 {
     int x;
     cout<< "Enter a number ";
     cin>>x;
     cout<<"Number entered by the user"<<endl<<x<<endl;
     
       cout<<x++<<endl;
       
       cout<<++x<<endl;
       
       cout<<x--<<endl;
       
       cout<<--x<<endl;
       
     return 0;
 }

/*Enter a number 15
15
17
17
15*/
