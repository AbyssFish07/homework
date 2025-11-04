#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,n;
    cin>>x>>n;
    double sum = 0;
    int power = 1;
    for(int i=1;i<=n;i++)
    {
        
        if(i%2==0)
        {
            sum-= pow(x,power);
        }
        else
        {
            sum+= pow(x,power);
        }
       power+= 2;
    }
    cout<<sum<<endl;
    return 0;
}
