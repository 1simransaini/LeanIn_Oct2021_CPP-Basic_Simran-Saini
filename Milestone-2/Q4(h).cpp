/*C++ program to print the following pattern
*****
 ****
  ***
   **
    *           */
         
#include<iostream>
using namespace std;
 
 int main()
 {
     int n;
    
     cout<<"Enter number of rows=";
     cin>>n;
     for(int i=n;i>=1;i--){
          for(int k=n-i;k>0;k--)
            cout<<" ";
        for(int j=i;j>0;j--)
            cout<<"*";    
     
         cout<<"\n";
     }
     
     return 0;
 }
 /*
 Enter number of rows=5
*****
 ****
  ***
   **
    *           */
            
