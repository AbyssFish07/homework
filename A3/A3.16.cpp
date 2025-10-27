#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bricks=2*n-1;
    int space=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<bricks;k++)
        {
            cout<<"#";
        }
        space++;
        bricks-=2;
        cout<<endl;
    }
    return 0;
}