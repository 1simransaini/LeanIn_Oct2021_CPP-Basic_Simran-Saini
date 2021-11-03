/*C++ program to print the following pattern
*****
*****
*****
*****
*****     */

#include<iostream>

using namespace std;

 int main()
 {
     int n;
     cout<<"Enter value of n";
     cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             cout<<"*";
         }
         cout<<"\n";

     }
     return 0;
 }
/*Enter value of n5
*****
*****
*****
*****
*****  */
