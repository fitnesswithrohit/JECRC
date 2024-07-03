#include <bits/stdc++.h>
using namespace std;

int sum_array(int arr[], int i, int n)
{
    cout << arr[i];
    if (i == n)
        return 0;
    return (sum_array(arr, i + 1, n) + arr[i]);
}

// int sum_array(int arr[], int n){ //1 2 3 4 5  n=5
//     cout<<arr[n-1]<<endl;
//     if (n <= 0)
//         return 0;
//     return (arr[n - 1] + sum_array(arr, n - 1));
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sum_array(arr, n);
    // int i=0;
    // cout<<sum_array(arr,i,n);

    return 0;
}