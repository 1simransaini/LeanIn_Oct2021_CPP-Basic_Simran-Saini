#include <iostream>
using namespace std;
int main()
{
  int i,j,n;
  char c;
  cout<<"Enter the no of lines to be printed: ";
  cin>>n;
  c='A';
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      if(c=='Z')
        break;
      cout<<c;
      c++;
    }
    cout<<endl;
  }
  return 0;
}
/*Enter the no of lines to be printed:5
A
BC
DEF
GHIJ
KLMNO*/
