#include <iostream>
using namespace std;
int main()
{
    int n, MAX = 0;
    int num[128] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
        if (num[i] > MAX){
            MAX = num[i];
        }
    }
    cout << MAX << endl;
}
