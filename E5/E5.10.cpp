#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp;
    int odd[64];
    int even[64];
    int count_odd = 0;
    int count_even = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 2 == 0){
            even[count_even] = temp;
            count_even++;
        }
        else{
            odd[count_odd] = temp;
            count_odd++;
        }
    }
    for (int i = 0; i < count_odd; i++){
        cout << odd[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < count_even; i++){
        cout << even[i] << " ";
    }
}
