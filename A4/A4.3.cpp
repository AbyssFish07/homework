#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,n;
    int sum = 0;
    cin>>a>>n;
    int suma = a;
    for(int i=1;i<=n;i++)
    {
        sum+= suma;
        suma= suma * 10 + a;

    }
    cout<<sum<<endl;
    return 0;
}
