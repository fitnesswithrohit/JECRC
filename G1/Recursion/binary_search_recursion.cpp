#include<bits/stdc++.h>
using namespace std;

bool Binary(int arr[], int target, int s, int e){
    if(s>e) return false;

    int mid = (s+e)/2;
    if(arr[mid] == target) return true;

    if(arr[mid]>target){
        return Binary(arr,target,s,mid-1);
    }
    else{
        return Binary(arr,target,mid+1,e);
    }
}

int main(){
    int n, target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool sol = Binary(arr,target, 0, n-1);
    if(sol) cout<<"true";
    else{
        cout<<"false";
    }

    return 0;
}