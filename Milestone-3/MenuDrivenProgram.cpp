#include <iostream>
using namespace std;
 
// Function to display all the menu in
// the current program
void menu()
{
    cout << "\n\t\tMENU :";
    cout << "\nPress 1 to traverse the array\n";
    cout << "Press 2 to search an element in the array\n";
    cout << "Press 3 to modify the element in the array\n";
    cout << "Press 4 to exit\n";
}

void traverse(int arr[],int num){
    
        for (int i = 0; i < num; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}

void search(int arr[], int num) {
    int i, element;
   cout << "\nEnter Element to Search : ";
    cin>>element;
    /* for : Check elements one by one - Linear */
    for (i = 0; i < num; i++) {
        /* If for Check element found or not */
        if (arr[i] == element) {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == num)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
void modify(int arr[],int num){

int t,a[10],n,m,s,j=0,b[10];
  
  cout<<"\nGiven values are:";
  traverse(arr, num);
  
  cout<<"\nEnter the position to be update:";
  cin>>t;
  cout<<"\nEnter the value to be update:";
  cin>>s;
  for(int i=0;i<num;i++)
  {
    if(i==t)
    {
       a[i]=s;
    }
  }
  cout<<"\nUpdated value is:";
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<"\n";;
  }

}

 int main()
{
    int arr[100], i, num, choice;
    cout<<"Enter the size of "
           "an array :\n";
 
    cin >> num;
    cout<<"Enter the elements of "
           "the array :\n";
 
    for (i = 0; i < num; i++) {
        cin >> arr[i];
    }
 
    do {
        cout << "\n";
        menu();
        cout << "\nEnter your "
             << "choice:\n ";
        cin >> choice;
         
 
        switch (choice) {
        case 1:
           traverse(arr, num);
            break;
        case 2:
            search(arr, num);
            break;
        case 3:
            modify(arr, num);
            break;
        
        case 4:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE ";
        }
    }while (choice <4);
    
 
    return 0;
}
