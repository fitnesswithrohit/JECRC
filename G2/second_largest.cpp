#include<iostream>
using namespace std;

int second_largest(int arr[], int n){
    int first = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first){
            first = arr[i];
        }
    }

    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] != first){
            if(second < arr[i]){
                second = arr[i];
            }
        }
    }

    return second;
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

    cout<<"Second largest element is: ";
    cout<<second_largest(arr,n);


    // 2 3 4 1 7 5
    // first = 7
    // second = INT_MIN

    return 0;
}

// 2 2 1 3 3 1 4  
// 4%2 = 0
// 2%2= 0

// 2 = 1 0
// 2 = 1 0
//     0 0 =>0
//     0^1 = 0^1=1
//     1^3 = 1 ^ 1 1
//     0 1
//     1 1 =>1 0 ^ 1 1 => 0 1^ 0 1 => 0^4 => 4
//     000
//     100 => 100


// 1 1 2 2 3 3 4

// XOR
// x^x = 0
// 0^x = x;