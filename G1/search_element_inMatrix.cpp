#include<bits/stdc++.h>
using namespace std;

bool find(vector<vector<int> >mat, int n, int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(k == mat[i][j]){
                return true;
            }
        }
    }

    return false;
}

void print(vector<vector<int> > mat, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<vector<int> > mat(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    // cout<<find(mat, n, k);
    if(find(mat,n,k)) cout<<"True";
    else{
        cout<<"False";
    }
    return 0;
}