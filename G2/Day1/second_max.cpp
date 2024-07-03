#include <bits/stdc++.h>
using namespace std;

int sec_max_ele(int arr[], int n){
    int fir = arr[0], sec = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > fir)
            fir = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != fir) {
            if (sec == INT_MIN)
                sec = arr[i];
            else if (arr[i] > sec)
                sec = arr[i];
        }
    }
    return sec;
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
    int arr2[6] = { 12, 35, 1, 10, 34, 1 };

    print(arr, 7);
    cout << sec_max_ele(arr, 7)<<endl;
    cout << sec_max_ele(arr1, 6)<<endl;
    cout << sec_max_ele(arr2, 6)<<endl;
    return 0;
}