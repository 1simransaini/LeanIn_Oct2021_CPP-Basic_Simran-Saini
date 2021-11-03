#include<iostream>
using namespace std;
int main()
{
    int i, space, j;
    for(i=1; i<=5; i++)
    {
        for(space=5; space>i; space--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
/*
    * 
   * * 
  * * * 
 * * * * 
* * * * *   */
