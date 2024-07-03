#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> &arr, int n)
{
    unordered_map<int,int>mp;
    int sol=0, major=0;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]] > major){
            sol = arr[i];
            major = mp[arr[i]];
        }
    }

    return sol;
}

// int majority_sorting(vector<int> &arr, int n)
// {
//     int l=0, h=n-1;
//     int mid = (l+h)/2;
//     sort(arr.begin(), arr.end());
//     int sol = arr[mid];

//     return sol;
// }

void print(vector<int>arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"original array: ";
    print(arr,n);

    cout<<"Majority element is: ";
    cout<<majority_sorting(arr,n);
    
    return 0;
}
