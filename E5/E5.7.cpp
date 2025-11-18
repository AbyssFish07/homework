#include <iostream>
using namespace std;
void bubbleSort(int arr[], int length);
int main()
{
    int n;
    int array1[16];
    int array2[16];
    int array3[32];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> array1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> array2[i];
    }
    for (int i = 0; i < n; i++){
        array3[i] = array1[i];
    }
    for (int i = n; i < 2 * n; i++){
        array3[i] = array2[i - n];
    }
    bubbleSort(array3, 2 * n);
    for (int i = 2 * n - 1; i >= 0; i--){
        cout << array3[i] << " ";
    }
}
void bubbleSort(int arr[], int length)
{
    int temp;
    bool completed = false;
    while (!completed)
    {
        completed = true;
        for (int i = 1; i < length; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                completed = false;
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i -1] = temp;
            }
        }
    }
}
