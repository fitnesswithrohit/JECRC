#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> arr, int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int element = arr[i];
        mp[element]++;
    }

    int k = n/2;
    for(auto i:mp){
        if(i.second > k){
            return i.first;
        }
    }

    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    majority_element(arr,n);

    return 0;
}