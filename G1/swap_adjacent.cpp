// Swap adjacent values of an array
#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i], arr[i+1]);
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // int arr[6] = {2,4,6,8,3,10};
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout<<"original array: ";
    print(arr, n);

    reverse_array(arr,n);
    cout<< "After reverse: ";
    print(arr,n);

    // 2 4 6 8 3 10//input
    // 0 1 2 3 4 5
    // i   i   i
    // 4 2 8 6 10 3 //output

    // 2 4 6 8 3 10
    return 0;
}