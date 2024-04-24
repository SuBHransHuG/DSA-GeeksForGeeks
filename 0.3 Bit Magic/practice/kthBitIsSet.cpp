#include<iostream>
using namespace std;

int main()
{
    // method 1 using leftShift
int n=5;
int k=3;
if(n & (1<<(k-1)) != 0){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
// method 2 using rightShift
if ((n>>(k-1)) & 1 == 1)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}


return 0;
}