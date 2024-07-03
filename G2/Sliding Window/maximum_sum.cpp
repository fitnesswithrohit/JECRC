#include <bits/stdc++.h>
using namespace std;

int Max_sum_subarray(vector<int> arr, int n, int window)
{
    int max_sum = 0;
    int sliding_window_sum = 0;
    if(n<window) return -1;// 2 1 3 1 2 1 , window=3;
    for (int i = 0; i < window; i++)  //i=0 2, i=1,1, i=2
    {
        sliding_window_sum += arr[i];// 2+1+3=6
    }
    max_sum = sliding_window_sum;//6+1
    int j=0;
    for (int i = window; i < n; i++){//
        sliding_window_sum += arr[i] - arr[i - window];
        sliding_window_sum += arr[i] - arr[j];
        j++;
        max_sum = max(max_sum, sliding_window_sum);
    }

    return max_sum;
}

int main()
{
    int n, window;
    cin >> n >> window;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Max_sum_subarray(arr, n, window);

    return 0;
}