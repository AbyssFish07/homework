#include<iostream>
#include<iomanip>
using namespace std;
bool noRepeat(int a);
int main()
{
    int num[9];
    int abc,def,ghi,temp;
    for(int i=100000000;i<999999999;i++)
    {
        if(noRepeat(i) == true)
        {
            abc = i/1e6;
            def = (i%1000000)/1e3;
            ghi = i%1000000%1000;
            if(3*abc==ghi && 2*abc==def)
            {
                cout<<abc<<" "<<def<<" "<<ghi<<endl;
            }

        }

    }
    
    return 0;
}
bool noRepeat(int a)
{
    int temp;
    int num[10];    
    for(int j=0;j<9;j++)
        {
            temp = a % 10;
            num[j] = temp;
            a /= 10;
        }
        for(int k=0;k<9;k++)
            for(int l=k+1;l<9;l++)
            {
                if(num[k] == num[l]) return false;
                if(num[k] == 0) return false;
            }
    return true;
}
