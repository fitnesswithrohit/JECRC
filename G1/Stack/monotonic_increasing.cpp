#include<bits/stdc++.h>
using namespace std;

vector<int> increase(vector<int>&arr,int n){
    vector<int> sol;
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[i] < st.top()){
            st.pop();
        }
        st.push(arr[i]); 
    }

    while(!st.empty()){
        // sol.push_back(st.top());
        sol.insert(sol.begin(), st.top());
        st.pop();
    }
    // reverse(sol.begin(),sol.end());
    return sol;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans = increase(arr,n);
    // for(int i=ans.size()-1;i>=0;i--){
    //     cout<<ans[i]<<" ";
    // }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}