#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // check wether an array is unique or not
    // unique means = frequency of each element is different
    int unique = 0;
    for(int i=0;i<n;i++){
        unique = unique^arr[i];
    }

    cout<<unique;

    return 0;
}
// x^x=0
// 0^x = x
// 1 1 2 2 3 4
// 3 = 0 1 1
// 4 = 1 0 0
//     1 1 1 = 7

// 1 1 1
// 2 1 0 power

// 2^2*1 + 2^1*1 + 2^0*1;
