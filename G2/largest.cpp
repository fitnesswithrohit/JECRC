#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int large = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }

    return large;
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
    cout<<"original array: ";
    print(arr,n);
    
    cout<<"Largest element is: ";
    cout<<largest(arr,n);

    return 0;
    // 2 4 1 3 7 5
    // 0 1 2 3 4 5 //indexing

    // large = -1;
    // large < arr[0] , large=2
    // large < arr[1] ,large =4
    // large < arr[2], large=4
    // large < arr[3], large = 4
    // large < arr[4], large = 7
    // large < arr[5], large=7




}
