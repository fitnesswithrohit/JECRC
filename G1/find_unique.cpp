#include<bits/stdc++.h>
using namespace std;

// 2 2 3 1 3 1 4
1 1 2 2 3 3 4

// 2 2 3 3 1 1 4 4
// all elements are present 2 times except one element
int find_unique_using_xor(vector<int>arr, int n){
   int sol = 0;
   for(int i=0;i<n;i++){
    sol = sol ^ arr[i];
   }
   return sol;
}

int find_unique(vector<int> &arr, int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // 2-2
    // 3-2
    // 1-2
    // 4-1

    for(auto i:mp){
        if(i.second == 1) return i.first;
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

    // cout<<"original array: ";
    // print(arr,n);

    cout<<find_unique(arr,n);
    cout<<endl;
    cout<<find_unique_using_xor(arr,n);
    
    return 0;
}