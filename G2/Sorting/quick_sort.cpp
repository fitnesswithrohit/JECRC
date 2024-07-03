#include <bits/stdc++.h>
using namespace std;

int partition_arr(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int res = s - 1;
    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            res++;
            swap(arr[i], arr[res]);
        }
    }

    res++;
    swap(arr[res], arr[e]);
    return res;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;
    if (s < e)
    {
        int p = partition_arr(arr, s, e);

        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
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

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}