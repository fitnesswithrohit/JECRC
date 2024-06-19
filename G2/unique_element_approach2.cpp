#include<bits/stdc++.h>
using namespace std;

int unique(vector<int> arr, int n){
    unordered_map<int,int>mp;
    // map<int,int>mp;

    for(int i=0;i<n;i++){
        int element = arr[i];
        mp[element]++;
    }

    for(auto i:mp){
        if(i.second == 1){
            return i.first;
        }
    }

    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Element is: ";
    cout<<unique(arr,n);

    return 0;
}