#include<iostream>
using namespace std;

void swap_adjacent(int arr[], int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i], arr[i+1]);
    }
}

void print(int arr[],int n){
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

    cout<<"original array: ";
    print(arr,n);

    cout<<"after swapping: ";
    swap_adjacent(arr,n);
    print(arr,n);


    return 0;
    // 0 1 2 3 4 5 
    // 2 3 4 5 6 7
    // i=0 2 
    // i=1 3
    // 3 2 4 5 6 7
    // i=2 4
    // i=3 5
    // i++
    // i = i+2;
    // i=4 6
    // i=5 7
    // 3 2 5 4 7 6


}