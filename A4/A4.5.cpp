#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum = 0;
    for(int j=a;j<=b;j++)
    {
        for(int i=1;i<j/2+1;i++)
        {
            if(j%i==0)
            {
                sum+= i;
            }
        }
            if(sum==j)
            {
                cout<<j<<" ";
            }
        sum = 0;
    }
    cout<< "\n";
    
    return 0;
}