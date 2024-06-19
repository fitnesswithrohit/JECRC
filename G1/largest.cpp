// Largest element in an array
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
        cout<<arr[i];
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
    cout << largest(arr,n);


    return 0;

    // 2 3 4 1 8
    // large = INT_MIN // -2^31
    // i=0 => large = 2
    // i=1 large=3,
    // i=2 large=4,
    // i=3 large = 4,
    // i=4 large = 8
}