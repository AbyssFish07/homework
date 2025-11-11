#include<iostream>
using namespace std;
bool isPrime(int a);
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++){
        if(isPrime(i) == true && isPrime(n - i) == true){
            cout << n << "=" << i << "+" << n - i <<endl;
            return 0;
        }
    }
    return 0;
}
bool isPrime(int a){
    if (a < 2) return false;
    for (int i = 2; i *i <= a; i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}
