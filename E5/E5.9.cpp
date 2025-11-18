#include <iostream>
using namespace std;
int main()
{
    int n, MAX = 0, min = 1e6;
    int num[128] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
        if (num[i] > MAX){
            MAX = num[i];
        }
        if (num[i] < min){
            min = num[i];
        }
    }
    cout <<MAX << " " << min << endl;
}