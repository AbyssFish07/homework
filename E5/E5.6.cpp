#include <iostream>
using namespace std;
int main()
{
    int n;
    int MAX = 0;
    int num[128];
    int count[128] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (num[i] == num[j]){
                count[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        if (count[i] == 1){
            cout << num[i] << " ";
        }
    }
    cout << endl;
}