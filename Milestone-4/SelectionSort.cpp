#include <iostream>
using namespace std;

int selectionsort(int arr[],int n);
int main()
{
    int i,x,n;
    cout<<"Enter The Size Of Array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element Of Array \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    return 0;
}

int selectionsort(int arr[],int n)
{
    int i,j,temp,min;
    
    for(i=0;i<n-1;i++)
    {
     min=i;
        for(j=i+1;j<n;j++)
        {
         if(arr[j]<arr[min])
         {
          min=j;
         }
  }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
    
    cout<<"\nSORTED ARRAY IN ACCENDING ORDER \n\n";
   
 for(i=0;i<n;i++) 
   {
    cout<<arr[i]<<" ";
   }

 cout<<"\n\nSORTED ARRAY IN DESCENDING ORDER \n"<<endl;
   
 for(i=n-1;i>=0;i--) 
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}
/*Enter The Size Of Array 
5
Enter The Element Of Array 
11
44
55
77
99

SORTED ARRAY IN ACCENDING ORDER 

11 44 55 77 99 

SORTED ARRAY IN DESCENDING ORDER 

99 77 55 44 11 */
