//C++ program for 3-D matrix of any size
#include<iostream>
using namespace std;
int main()
{
    int i, j, k, a[10][10][10];
    int one, two, three;
    cout<<"Enter the Dimension of 3D Array: ";
    cin>>one>>two>>three;
    cout<<"Enter "<<one*two*three<<" 3D Array Elements: ";
    for(i=0; i<one; i++)
    {
        for(j=0; j<two; j++)
        {
            for(k=0; k<three; k++)
                cin>>a[i][j][k];
        }
    }
    cout<<endl;
    for(i=0; i<one; i++)
    {
        for(j=0; j<two; j++)
        {
            for(k=0; k<three; k++)
                cout<<a[i][j][k]<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
/*
Enter the Dimension of 3D Array: 2
3
4
Enter 24 3D Array Elements: 1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24

1  2  3  4  
5  6  7  8  
9  10  11  12  

13  14  15  16  
17  18  19  20  
21  22  23  24  

*/
