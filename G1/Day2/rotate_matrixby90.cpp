#include <bits/stdc++.h>
using namespace std;

void rotate(vector < vector < int > > &arr, int n)
{
    vector < vector < int > > rot(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rot[j][n - i - 1] = arr[i][j];
        }
    }
    arr=rot;
}

void print(vector<vector<int> > arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout<<endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector < vector < int > > arr(n ,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "original array: ";
    print(arr, n);

    cout<<"after rotate: ";

    rotate(arr,n);
    print(arr,n);

    return 0;
}
