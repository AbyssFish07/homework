#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int power = 0;
    int lowest;
    int sum = 0;
    while (n != 0){
        lowest = n % 10;
        sum += lowest * pow(2,power);
        n /= 10;
        power++;
    }
    n = sum;
    sum = 0;
    power = 0;
    while(n != 0){
        lowest = n % 8;
        sum += lowest * pow(10,power);
        n = n / 8;
        power++;  
    }
    cout<<sum<<endl;
    return 0;
}