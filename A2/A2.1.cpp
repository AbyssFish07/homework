#include<iostream>
using namespace std;
int main()
{
    int money=0;
    cin>>money;
    int rmb100,rmb50,rmb20,rmb10,rmb5,rmb2,rmb1;
    rmb100=money/100;
    rmb50=money%100/50;
    rmb20=money%100%50/20;
    rmb10=money%100%50%20/10;
    rmb5=money%100%50%20%10/5;
    rmb2=money%100%50%20%10%5/2;
    rmb1=money%100%50%20%10%5%2;
    cout<<rmb100<< " Note(s) of 100.00"<<endl; 
    cout<<rmb50<<" Note(s) of 50.00"<<endl;
    cout<<rmb20<<" Note(s) of 20.00"<<endl;
    cout<<rmb10<<" Note(s) of 10.00"<<endl;
    cout<<rmb5<<" Note(s) of 5.00"<<endl;
    cout<<rmb2<<" Note(s) of 2.00"<<endl;
    cout<<rmb1<<" Note(s) of 1.00"<<endl;
    return 0;
}
