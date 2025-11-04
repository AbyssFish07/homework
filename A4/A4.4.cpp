#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin>>n;
    int sum = 0;
    for(int i=1;i<n/2+1;i++)
    {
        if(n%i==0)
        {
            cout<<i<< " ";
            sum+= i;
        }
    }
    cout<<"\n";
    if(sum==n)
    {
        cout<<n<<" is perfect."<<endl;
    }
    else
    {
        cout<<n<<" is not perfect."<<endl;
    }
    return 0;
}

