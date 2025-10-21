#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
  double o;
  cin>>o;
  cout<<int(o);
  cout<<" ";
  cout <<fixed << setprecision(7) <<o-int(o);

   
  return 0;
}