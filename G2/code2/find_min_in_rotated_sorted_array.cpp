#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int s = 0, e = n - 1;
    int mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (nums[mid] > nums[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }

    return nums[s];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findMin(arr);
    return 0;
}