#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
    int sum = 0;
    int mn = INT_MAX;
    int mx = INT_MIN;

    // int mn = *min_element(arr.begin(),arr.end());
    // int mx = *max_element(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout<<sum-mx<<endl<<sum-mn;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    miniMaxSum(arr);

    return 0;
}