#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin>>n;
    int space = (n-1)/2;
    int star = 1;
    for(int i=1;i<=(n+1)/2;i++)
    {
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        space--;
        cout<<"\n";
    }
    int space1 = 1;
    for(int i=(n-1)/2;i>0;i--)
    {
        for(int j=0;j<space1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        space1++;
        cout<<"\n";
    }
    return 0;
}
