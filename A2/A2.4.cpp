#include<iostream>
using namespace std;
int main()
{
    int num[5];
    int sum=0;
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    for(int i=0;i<5;i++)
    {
        if(num[i]%2!=0)
        sum+=num[i];
    }
    cout<<sum<<endl;
    return 0;
}
