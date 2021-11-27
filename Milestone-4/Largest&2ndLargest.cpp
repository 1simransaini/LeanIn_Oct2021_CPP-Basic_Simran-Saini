//C++ program by using function to find the largest and second largest element in the array.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int size,i;
    int arr[50];//variable declaration to size of array
int large=0, secondLarge=0
;
cout<<"Enter the number of element in array: ";
cin>>size;//taking input from user for no of elements in array
for(i=0; i<size; i++){
    cout<<"Enter the array element"<<i+1<<": ";
cin>>arr[i];//taking input from user for array elements
if(large<arr[i]){
secondLarge=large;
large=arr[i];
}
else if(secondLarge<arr[i]){
secondLarge=arr[i];
}
}
cout<<"\n";
cout<<""<<large<<" is a largest nunber\n";
cout<<secondLarge<<" is a second largest nunber";
//display result on the screen
getch();
    return 0;
}
/*Enter the number of element in array: 5
Enter the array element1: 1
Enter the array element2: 4
Enter the array element3: 56
Enter the array element4: 76
Enter the array element5: 88

88 is a largest nunber
76 is a second largest nunber

...Program finished with exit code 0*/
