//C++ program to implement binary search using function.
#include<iostream>
using namespace std;
int main()
{
    int search(int [],int,int);
    int n,i,a[100],e,res;
    cout<<"Number of Elements:";
    cin>>n;
    cout<<"\nEnter Elements of Array in Ascending order\n";
    
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter element to search:";
    cin>>e;
    
    res=search(a,n,e);
    
    if(res!=-1)
        cout<<"\nElement found at position "<<res+1;
    else
        cout<<"\nElement is not found!";
    return 0;
}
int search(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;
    
    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }
    
    return -1;
}
/*
OUTPUT1:
Number of Elements:5

Enter Elements of Array in Ascending order
10
20
30
40
50

Enter element to search:44

Element is not found!

OUTPUT2:
Number of Elements:5

Enter Elements of Array in Ascending order
1
2
3
4
5

Enter element to search:3

Element found at position 3
*/
