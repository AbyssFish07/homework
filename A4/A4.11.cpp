#include<iostream>
using namespace std;
void printFibonacci(int n);
int main()
{
    int n;
    cin>>n;
    printFibonacci(n);
    cout<<endl;
    return 0;
}
void printFibonacci(int n){
    int a = 0, b = 1;
    if(n >= 1) cout << a;
    if(n >= 2) cout << " " << b;
    for(int i = 3;i <= n;i++){
        int c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}
