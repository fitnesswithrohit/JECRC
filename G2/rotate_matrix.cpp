#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int> > matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_matrix(vector<vector<int> > &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
//transpose of matrix
// void rotate_matrix(vector<vector<int> > &matrix, int n)
// {
//     int rows=matrix.size();
//     int cols=matrix[0].size();
//     vector<vector<int>>ans(cols,vector<int>(rows));
//     // vector<vector<int>>ans(cols,vector<int>(rows,0));
//     for (int i = 0; i < rows; i++){
//         for (int j = 0; j < cols; j++){
//             swap(matrix[i][j], ans[j][i]);
//         }
//     }
//     return ans;
// }

// void rotate_matrix(vector<vector<int> > &matrix, int n){
//     vector<vector<int> > rotate(n,vector<int>(n,0));

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             rotate[i][n-j-1] = matrix[j][i];
//         }
//     }
//     // print(rotate,n);
//     matrix = rotate;
// }

int main()
{
    int n = 6;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "original matrix: ";
    print(matrix, n);
    cout << endl
         << "rotated matrix: ";

    rotate_matrix(matrix, n);
    print(matrix, n);

    return 0;

    // 1 2 3
    // 4 5 6
    // 7 8 9
}