#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    int num[128];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> num[i];
    }
    for (int i = n; i > 0; i--){
        sum += num[i];
    }
    cout << sum << endl;
}