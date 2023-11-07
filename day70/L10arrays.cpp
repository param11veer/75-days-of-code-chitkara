#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

// int main(){
//     /*
//         !ARRAYS are contiguous
//     */
//    int size = 10;
//    int arr[size];
//    std::fill(arr, arr+size, 5);//*used to fill an entire number with same number
//    cout << arr[3]; 
//     return 0;
// }

int main(){
    int arr[15] {1,2};
    for(int i=0; i<15; i++){
        cout << arr[i]<<endl;
    }
    return 0;
}