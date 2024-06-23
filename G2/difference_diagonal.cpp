#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int> > arr) {
    int rows=arr.size();
    int d_left_to_right = 0;
    int d_right_to_left = 0;

    for(int i=0;i<rows;i++){
        d_left_to_right += arr[i][i];
        d_right_to_left += arr[i][rows-i-1];
    }

    return abs(d_left_to_right - d_right_to_left);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout<<diagonalDifference(matrix);

    return 0;
}