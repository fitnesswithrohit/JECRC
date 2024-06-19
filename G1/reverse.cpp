// reverse an array

#include<bits/stdc++.h>
using namespace std;

// int reverse_array(int arr[], int n){
//     int j=n-1;
//     for(int i=0;i<n/2;i++){
//         // swap(arr[i], arr[j]);
//         int a = 
//         j--;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int sol[n];
    for(int i=0;i<n;i++){
        cin >> sol[i];
    }
    int arr[6] = {2,3,12,4,7,10};
    // cout << "original array: ";
    // print(arr, 6);
    reverse(sol, sol+n);
    print(sol,n);
//    reverse_array(arr,6);
    return 0;
}

// arr[0] = 2 //given
// arr[5] = 10 // given
// int a = arr[0] = 2;
// arr[0] = arr[5];
// arr[0] = 10; //new
// arr[5] = a;
// arr[5] = 2;