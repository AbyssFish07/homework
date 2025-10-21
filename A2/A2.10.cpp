#include<iostream>
using namespace std;
int main()
{
    char x[100];
    cin>>x;
    for (int i=0;x[i]!='\0';i++)
    {
      if(x[i]!='.')
      {
        cout<<x[i];
      }
      else
      {
        cout<<" ";
      }
    }
   cout<<endl;
    return 0;
}