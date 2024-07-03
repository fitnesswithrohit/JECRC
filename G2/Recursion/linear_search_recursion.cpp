#include<bits/stdc++.h>
using namespace std;

// void print(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

bool check(int arr[], int n, int target){
    // print(arr,n);
    if(n==0) return false;

    if(arr[0] == target) return true;
    else{
        bool other_part_of_array = check(arr+1, n-1, target);
        return other_part_of_array;
    }
    
}

int main(){
    int n, target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool sol = check(arr,n,target);

    if(sol){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}