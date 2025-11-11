#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = n -1;
    
    for(int i = 1;i <= n; i++){
        char letter = 'A';
        for(int j = 0;j < space;j++){
            cout<<" ";
        }
        space--;
        for(int k = 1; k <= i;k++){
            cout<<letter;
            letter++;
        }
        letter -= 2;
        for(int l = 1; l <= i - 1; l++){
            cout<<letter;
            letter--;
        }
        cout<<endl;
    }

    return 0;
}
