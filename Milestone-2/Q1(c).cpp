/*C++ program to print pattern 3
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5    */

#include<iostream>
using namespace std;
 
 int main()
 {
     int n;
     cout<<"Enter value of n";
     cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             cout<<j;
         }
         cout<<"\n";
         
     }
     return 0;
 }
 /*
 Enter value of n5
12345
12345
12345
12345
12345   */
