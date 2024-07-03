#include<bits/stdc++.h>
using namespace std;

vector<int> monotonic_increasing(vector<int>&arr, int n){
    stack<int>st;
    vector<int>sol;

    for(int i=0;i<n;i++){

        while(!st.empty() && st.top()>arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }

    while(!st.empty()){
        // sol.push_back(st.top());
        sol.insert(sol.begin(),st.top());
        st.pop();
    }
    // reverse(sol.begin(),sol.end());
    return sol;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans = monotonic_increasing(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}