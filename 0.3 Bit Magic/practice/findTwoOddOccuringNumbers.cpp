#include<iostream>
using namespace std;

void twoOddOccuring(int arr[], int size){
    // for (int i = 0; i < size; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < size; j++)
    //     if (arr[i] == arr[j] )
    //     {
    //         count++;
    //     }
    //     if (count % 2 != 0)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
    // }
    int res1 = 0,res2 = 0,r = 0;;
    for(int i = 0; i<size;i++){
        r = r^arr[i];
    }
    int s = r & (~(r-1));
    for (int i = 0; i < size; i++)
    {
        if((arr[i] & s) != 0){
            res1 = res1^arr[i];
        }
        else
        {
            res2 = res2^arr[i];
        }
        
    }
    cout<<res1<<" "<<res2;
    
}

int main()
{
int arr[]= {20,8,2,20};
int size = sizeof(arr)/sizeof(arr[0]);
twoOddOccuring(arr,size);
return 0;
}