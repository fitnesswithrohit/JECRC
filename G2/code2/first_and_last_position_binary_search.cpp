//Leetcode - first and last position
#include <bits/stdc++.h>
using namespace std;
int last_pos(vector<int> &nums, int target, int n)
{
    int s = 0;
    int e = n - 1;
    int sol = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            sol = mid;
            s = mid + 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return sol;
}

int first_pos(vector<int> &nums, int target, int n)
{
    int s = 0;
    int e = n - 1;
    int sol = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            sol = mid;
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return sol;
}

// pair<int,int> pp(int a, int b){
//     return make_pair(a,b);
//     // pair<int,int>p;
//     // p.first = a;
//     // p.second = b;
//     // return p;//{2,3}
// }


int main()
{
    int n, target;
    cin >> n>>target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = first_pos(arr, target, n);
    int b = last_pos(arr, target, n);
    // pair<int,int> x = pp(a,b);
    // cout<<p.first<<" "<<p.second<<endl;
    cout<<a<<" "<<b;
    return 0;
}