
#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10],Transpose[10][10];
   //Defining the matrices by entering rows, columns.
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;

   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
    //Entering elements by the user
   cout << "Enter the elements of first matrix(enter first row first): ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
  
//Calculating Transpose
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        Transpose[i][j]=m1[j][i];
      }
   }
   //Displaying output
      cout<<"Output: ";
      cout<<endl;
      for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            cout << Transpose[i][j] << "  ";
            if(j == col - 1)
            cout << endl;
        }
   return 0;
}
/*
Enter the number of rows(should be >1 and <10): 3
Enter the number of column(should be >1 and <10): 3
Enter the elements of first matrix(enter first row first): 1
2
3
4
5
6
7
8
9
Output: 
1  4  7
2  5  8
3  6  9  */
