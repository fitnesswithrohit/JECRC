#include <bits/stdc++.h>
using namespace std;

// bool unique_occurrences(int arr[], int n)
// {
//     unordered_map<int, int> mp, sol;
//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]]++;
//     }

//     for (auto x : mp)
//     {
//         sol[x.second]++;
//         if (sol[x.second] > 1)
//         {
//             return false;
//         }
//     }
//     return true;
// }

bool unique_occurrences(int arr[], int n)
{
    unordered_map<int, int> mp;
    set<int> sol;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        sol.insert(x.second);
    }

    if(sol.size() != mp.size()) return false;
    
    return true;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {3, 7, 2, 2, 7, 3, 4};
    int arr1[8] = {1, 2, 2, 1, 1, 3};

    print(arr, 7);
    cout << unique_occurrences(arr, 7) << endl;
    cout << unique_occurrences(arr1, 6);
}