#include <bits/stdc++.h>
using namespace std;

void movezero(vector<int> &arr, int n)
{
    // sort(arr.begin(),arr.end());
    // reverse(arr.begin(),arr.end());
    vector<int> sol;

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            sol.push_back(arr[i]);
        }
    }

    int ns = sol.size();
    for(int i=0;i<n;i++){
        if(i<ns){
            arr[i] = sol[i];
        }
        else{
            arr[i] = 0;
        }
    }
}

void movezero_optimal(vector<int> &arr, int n)
{
    int move = -1;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            move = i;
            break;
        }
    }

    for(int i=move+1; i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[move]);
            move++;
        }
    }
}

void print(vector<int>arr, int n)
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
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"original array: ";
    print(arr,n);

    cout<<"after: ";
    movezero(arr,n);
    print(arr,n);

    movezero_optimal(arr,n);
    print(arr,n);
    
    return 0;
}
