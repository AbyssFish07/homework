#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    int num[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }
    int averge=sum/n;
    cout<<sum<<endl;
    cout<<averge<<endl;

    return 0;
}
