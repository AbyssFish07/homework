#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        int j = (i + 1) % n;   // 下一个点
        sum += x[i] * y[j] - x[j] * y[i];
    }

    double area = fabs(sum) / 2.0;
    cout << fixed << setprecision(3) << area << endl;

    return 0;
}
