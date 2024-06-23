#include<bits/stdc++.h>
using namespace std;

void print(vector<char>s, int n){
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}

void reverseString(vector<char>&s, int n){
    int i=0, j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cin>>n;
    vector<char>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    reverseString(s,n);

    print(s,n);

    return 0;
}