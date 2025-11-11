#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int i = 0;
    int lowest;
    while(n != 0){
        lowest = n % 2;
        sum += lowest * pow(10,i);
        n = n / 2;
        i++;  
    }
    cout<<sum<<endl;
    return 0;
}
