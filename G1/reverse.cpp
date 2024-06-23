// reverse an array 
#include<iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int j=n-1;
    for(int i=0;i<n/2;i++){
        // swap(arr[i], arr[j]);
        int a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
        j--;
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[6] = {2,3,4,5,6,7};


    cout<<"origina array: ";
    print(arr,n);

    reverse_array(arr, n);
    cout<<"after reverse: ";
    // reverse(arr,arr+n);
    print(arr,n);
    // 2 3 4 5 6 7
    // i=0 j=5
    // 7 3 4 5 6 2
    // i=1 j=4
    // 7 6 4 5 3 2
    // i=2 j=3
    // 7 6 5 4 3 2
    // i=3 j=2
    // 7 6 4 5 3 2
    // i=4 j=2
    // 7 3 4 5 6 2
    // i=5 j=0
    // 2 3 4 5 6 7

    // 7 6 5 4 3 2

}