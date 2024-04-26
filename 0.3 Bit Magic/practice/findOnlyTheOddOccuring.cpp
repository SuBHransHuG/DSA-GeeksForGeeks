#include<iostream>
using namespace std;

void oddOccurent(int arr[],int size){
// for (int i = 0; i < size; i++)
// {
//     int count = 0;
//     for (int j = 0; j < size; j++){
//     if(arr[i] == arr[j])
//         count++;
//         }
    
//     if(count % 2 != 0){
//         cout<<arr[i];
//     }
// }

// efficent way
int r = 0;
for (int i = 0; i < size; i++)
    r = r ^ arr[i];
    cout<<r; 
}
int main()
{

int arr[] = {1,1,2,4,3,4,4,3,2,4,5};
int size = sizeof(arr) / sizeof(arr[0]);
oddOccurent(arr,size);
return 0;
}