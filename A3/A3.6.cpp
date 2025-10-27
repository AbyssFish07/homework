#include<iostream>
using namespace std;
int main()
{
    int x,y;
    if(x>0&&y>0)
    {
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the First quadrant."<<endl;
    }
    else if(x<0&&y>0)
    {
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Second quadrant."<<endl;
    }
    else if(x<0&&y<0)
    {
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Thrid quadrant."<<endl;
    }
    else
    {
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Fourth quadrant."<<endl;
    }
    return 0;
}
