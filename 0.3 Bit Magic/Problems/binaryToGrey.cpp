#include<iostream>
#include <string>
using namespace std;

void binaryToGrey(string s){
    string grey = "";
    grey+=s[0];
    cout<<grey<<endl;
    for (int i = 1; i < s.length(); i++)
    {
        grey+=(s[i-1]^s[i])?'1':'0';
    }
    cout<<"Grey Code: "<<grey<<endl;
    int n = stoi(grey) ;

    int num = n;
        int dec_value = 0;
 
        int base = 1;
 
        int temp = num;
        while (temp > 0) {
            int last_digit = temp % 10;
            temp = temp / 10;
            dec_value += last_digit * base;
            base = base * 2;
        }
 
        cout<< dec_value;
    }

int main()
{
int n = 111;
string s = to_string(n);
cout<<"String = "<<s<<endl;
binaryToGrey(s);
return 0;
}