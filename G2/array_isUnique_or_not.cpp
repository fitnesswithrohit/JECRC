#include<bits/stdc++.h>
using namespace std;

// 1 2 1 1 3 2 4 4 4 4 

// 1-3
// 2-2
// 3-1
// 4-4

// 1 2 1 1 3 2 4 4 4 

// 1-3
// 2-2
// 3-1
// 4-3

bool unique_array(vector<int> arr, int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int element = arr[i];
        mp[element]++;
    }
    
    map<int,int>mp1;
    for(auto i:mp){
        mp1[i.second]++;
    }

    for(auto i:mp1){
        if(i.second > 1) return false;
    }

    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<unique_array(arr,n);

    return 0;
}