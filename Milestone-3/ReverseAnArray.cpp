//C++ program to Reverse an Array

#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, j, temp;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    j = tot-1;
    for(i=0; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
/*Enter the Size for Array: 5
Enter 5 Array Elements: 1
2
3
4
5

The Original Array is:
1 2 3 4 5 

The Reverse of Given Array is:
5 4 3 2 1 
*/
