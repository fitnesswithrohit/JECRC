#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return e + 1;
}

int main()
{
    int n, target;
    cin >> n>>target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<searchInsert(arr,target);
    return 0;
}