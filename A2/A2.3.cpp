#include<iostream>
using namespace std;
int main()
{
    int time=0;
    int hour,min,sec;
    cin>>time;
    hour=time/3600;
    min=time%3600/60;
    sec=time%3600%60;
    cout<<"There are:"<<endl;
    cout<<"H:M:S "<<hour<<":"<<min<<":"<<sec<<endl;
}
