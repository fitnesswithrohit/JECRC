#include <bits/stdc++.h>
using namespace std;

// Method 3
// vector<int> rotateLeft(int d, vector<int> arr) {
//     int n=arr.size();
//     d = d % n;
//     vector<int> sol(n);
//     for(int i = 0; i < n; i++) {
//         sol[(n-d+i)%n] = arr[i];
//     }
//     return sol;
// }

// Method 2
vector<int> rotateLeft(int d, vector<int> &nums)
{
    int n = nums.size();
    d = d % n;
    reverse(nums.begin(), nums.begin() + d); //1 2 - 2 1
    reverse(nums.begin() + d, nums.end()); // 3 4 5 - 5 4 3
    reverse(nums.begin(), nums.end());// 2 1 5 4 3 - 3 4 5 1 2

    return nums;
}

// Method 1
// vector<int> rotateLeft(int d, vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> sol;
//     for (int i = d; i < n; i++)
//     {
//         sol.push_back(arr[i]);
//     }

//     // 5
//     // 2
//     // 1 2 3 4 5
//     for (int i = 0; i < d; i++)
//     {
//         sol.push_back(arr[i]);
//     }
//     return sol;
// }

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    
    vector<int> ans = rotateLeft(d, arr);
    for(int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }

    return 0;
}