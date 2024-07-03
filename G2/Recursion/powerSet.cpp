#include <bits/stdc++.h>
using namespace std;

void store(vector<int> &nums, int i, vector<int> subset, vector<vector<int> > &sol)
{
    if (i >= nums.size())
    {
        sol.push_back(subset);
        return;
    }

    store(nums, i + 1, subset, sol);

    int e = nums[i];
    subset.push_back(e);
    store(nums, i + 1, subset, sol);
}

vector<vector<int> > subsets(vector<int> &nums)
{
    vector<vector<int> > power_set;
    vector<int> subset;
    int i = 0;
    store(nums, i, subset, power_set);
    return power_set;
}

void print(vector<vector<int> > arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int> > ans = subsets(arr);
    print(ans,ans.size());

    return 0;
}