// check array is unique or not
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr, int n){
    unordered_map<int,int>mp, mp1;
    // map<int,int>mp; //map<first, second>map_name where first is key and second is value of that key.

    for(int i=0;i<n;i++){
        int element = arr[i];
        mp[element]++;
    }
    
    // unordred_map<int,int> sol;
    for(auto i:mp){
        mp1[i.second]++;
    }

    for(auto i:mp1){
        if(i.second > 1) return false;
    }

    return true;
}

void print(vector<int>arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);//={2,2,2,3,3,4};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array: ";
    print(arr,n);

    cout<<check(arr,n)<<endl;
    return 0;


}
