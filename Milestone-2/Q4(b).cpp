/*C++ program to print the following pattern
A
A B
A B C
A B C D
A B C D E*/
#include<iostream>

using namespace std;

int main()
{
  char row,col,ch;
  int height;
  cout<<"Enter the height of Triangle=";
  cin>>height;
  for(row=1;row<=height;row++)
  {
  	 ch='A';
	 for(col=1;col<=row;col++)
  	   {
		cout<<ch<<" ";
		ch++;
	   }
  	cout<<endl;
  	
  }
  return 0;

}

/*Enter the height of Triangle=5
A 
A B 
A B C 
A B C D 
A B C D E */
