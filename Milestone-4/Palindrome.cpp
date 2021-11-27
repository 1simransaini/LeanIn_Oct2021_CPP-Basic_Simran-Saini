//  C++ program to check number is palindrome or not using Function  
#include<iostream>
using namespace std;

void rev(int);

int main()
{
        int n;
        cout<<"Enter any number :: ";
        cin>>n;
        rev(n);
}

void rev(int n)
{
        int n1,d,rn=0;
        n1=n;

        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;
        }

        if(n1==rn)
        cout<<"\nThe Number "<<n1<<" is a Palindrome no.\n";
        else
        cout<<"\nThe Number "<<n1<<" is NOT a Palindrome no.\n";

}
/*
OUTPUT1
Enter any number :: 1111

The Number 1111 is a Palindrome no.

OUTPUT2
Enter any number :: 1234

The Number 1234 is NOT a Palindrome no.

*/
