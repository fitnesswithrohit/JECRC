#include <bits/stdc++.h>
using namespace std;

int max_ele(int arr[], int n){
    int sol = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > sol) sol = arr[i];
    }

    return sol;
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
    int arr1[6] = {1, 2, 2, 1, 1, 3};

    print(arr, 7);
    cout << max_ele(arr, 7);
    return 0;
}