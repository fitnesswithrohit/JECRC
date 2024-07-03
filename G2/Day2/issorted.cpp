#include <bits/stdc++.h>
using namespace std;

bool sorted_brute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

bool sorted_optimal(int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        if (arr[i] < arr[i-1])
        {
            return false;
        }
    }
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sol = sorted_brute(arr,n);
    if(sol){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    bool sol1 = sorted_optimal(arr,n);
    if(sol1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}
