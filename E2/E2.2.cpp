#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double jiecheng=1,e=0;
    int i=0;
    while(1/jiecheng>1e-5)
    {       
        e+=1/jiecheng;
        i++;
        jiecheng*=i;
    }
    cout<<fixed<<setprecision(4)<<e<<" "<<i<<endl;
}