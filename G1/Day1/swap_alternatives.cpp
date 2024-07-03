#include<iostream>
using namespace std;

void swapalter(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8] = {5,2,9,4,7,6,1,0};

    swapalter(arr, 8);
    print(arr, 8);
    return 0;
}