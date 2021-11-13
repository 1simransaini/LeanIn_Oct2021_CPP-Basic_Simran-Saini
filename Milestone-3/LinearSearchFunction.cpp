//C++ program to implement linear search using function.

#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

void linear_search(int[], int);

int main() {
    int arr_search[MAX_SIZE], i, element;

    cout << "Simple C++ Linear Search Example - Array and Functions\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_search[i];
    }

    cout << "\nEnter Element to Search : ";
    cin>>element;

    linear_search(arr_search, element);

    getch();
}

void linear_search(int fn_arr[], int element) {
    int i;

    
    for (i = 0; i < MAX_SIZE; i++) {
        
        if (fn_arr[i] == element) {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == MAX_SIZE)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
/*
OUTPUT1:
Simple C++ Linear Search Example - Array and Functions

Enter 5 Elements for Searching : 
10
20
30
40
50

Your Data   :   10      20      30      40      50
Enter Element to Search : 44

Search Element : 44  : Not Found 


OUTPUT2:
Simple C++ Linear Search Example - Array and Functions

Enter 5 Elements for Searching : 
1
2
3
4
5

Your Data   :   1       2       3       4       5
Enter Element to Search : 4

Linear Search : Element  : 4 : Found :  Position : 4.
*/
