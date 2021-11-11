//C++ Program to Calculate Sum of all Elements in an Array

#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0, pro = 1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        
    }
    cout << "\nSum of array elements : " << sum;
   
    return 0;
}

/*Enter the size of the array : 5

Enter the elements of the array : 1
2
3
4
5

Sum of array elements : 15
*/
