#include <bits/stdc++.h>
using namespace std;

void store(string str, int i, string subset, vector<string>&sol)
{
    if (i >= str.size())
    {
        sol.push_back(subset);
        return;
    }

    store(str, i + 1, subset, sol);

    char e = str[i];
    subset.push_back(e);
    store(str, i + 1, subset, sol);
}

vector<string> subsets(string str)
{
    vector<string> power_set;
    string subset="";
    int i = 0;
    store(str, i, subset, power_set);
    return power_set;
}

void print(vector<string> arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    string s;
    cin>>s;
    int n = s.size();

    vector<string> ans = subsets(s);
    print(ans,ans.size());

    return 0;
}