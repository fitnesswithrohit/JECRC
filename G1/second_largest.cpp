//Second Largest element in an array
#include<iostream>
using namespace std;

int second_largest(int arr[], int n){
    int first_large = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first_large){
            first_large = arr[i];
        }
    }
    
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] != first_large){
            if(arr[i] > second){
                second = arr[i];
            }
        }
    }

    // 2 3 4 1 2 6
    // first_large = 6
    // iterate 
    // i=0 second = 2 (2 > INT_MIN)
    // i=1 second = 3 (3 > 2)
    // i=2 second = 4 (4 > 3)


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

    cout<<"Second Largest element is: ";
    cout << second_largest(arr,n);


    return 0;
}