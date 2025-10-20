#include <cmath>
#include <iostream>
using namespace std;
int main() {
	cout << "A1=" << 1.0+1.0/(1.0+1.0/(1.0+(1.0/5)))<<"\n";
	cout << "A2=" << pow(3*3+4*4,0.5)<< '\n';
	double a = (1 - cos(3.14159 / 2)) / 2;
	cout << "A3=" << pow(a, 0.5) << '\n';
	double b = (3.1415926 / 4);
		cout << "A4=" << pow(sin(b), 2) + sin(b) * cos(b) - pow(cos(b), 2) << '\n';
		cout << "A5=" << (2 * sqrt(5) * (sqrt(6) + sqrt(3))) / (6 + 3) << '\n';
		cout << "A6=" << (log(5 * log(3)) - log(2)) / sin(3.14159 / 3)<<endl;
        cout<<"@@@@@\n@\n@\n@@@@@\n@\n@\n@\n"<<endl;
      cout<<"    @@@@@@\n  @@      @@\n @\n @\n @\n @\n @\n  @@      @@\n    @@@@@@\n";
	return 0;
}
