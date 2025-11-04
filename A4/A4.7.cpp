#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>> n;
    a=n/100;
    b=n%100/10;
    c=n%100%10;
    if(pow(a,3)+pow(b,3)+pow(c,3) == n)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }
    return 0;
}
