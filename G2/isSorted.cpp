#include<bits/stdc++.h>
using namespace std;

bool isSorted_array(vector<int>arr,int n){
    if(n == 0 && n==1) return true;

    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    // 1 2 3 4 5
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<isSorted_array(arr,n);

    return 0;
}