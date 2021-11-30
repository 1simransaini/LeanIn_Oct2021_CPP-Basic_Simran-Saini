//C++ program for Bubble Sort
#include <iostream>
 
using namespace std;
 
// Sort arr[] of size n using Bubble Sort. 
void BubbleSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			// Comparing consecutive data and switching values if value at j > j+1.
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
		// Value at n-i-1 will be maximum of all the values below this index.
	}	
}	
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	BubbleSort(arr, n);
 
	// Display the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}
/*
Enter the number of data element to be sorted: 8
Enter element 1: 44
Enter element 2: 34
Enter element 3: 22
Enter element 4: 55
Enter element 5: 77
Enter element 6: 1
Enter element 7: 10
Enter element 8: 90

Sorted Data ->1->10->22->34->44->55->77->90
*/
