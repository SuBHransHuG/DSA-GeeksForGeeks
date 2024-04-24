#include<iostream>
using namespace std;

int main()
{
    // leftShift
int x = 10;
cout<<"LeftShift of "<<x<<" with 1 is "<<(x<<1)<<endl;
cout<<"LeftShift of "<<x<<" with 2 is "<<(x<<2)<<endl;
int y = 4;
cout<<"LeftShift of "<<x<<" with "<<y<<" is "<<(x<<y)<<endl;

// RightShift
x = 40;
cout<<"RightShift of "<<x<<" with 1 is "<<(x>>1)<<endl;
cout<<"RightShift of "<<x<<" with 2 is "<<(x>>2)<<endl;
cout<<"RightShift of "<<x<<" with "<<y<<" is "<<(x>>y);

return 0;
}