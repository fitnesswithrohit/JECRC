#include<iostream>
using namespace std;

int find_unique(int arr[], int n){
    int sol=0;
    for(int i=0;i<n;i++){
        sol = sol ^ arr[i];
    }

    return sol;
}

int find_unique_ele(int arr[], int n){
    int freq[100]={0};

    int sol=0;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[i] == 1) sol = i;
    }

    return sol;
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {3,7,2,2,7,3,4};

    print(arr, 7);
    cout << find_unique(arr, 7)<<endl;
    cout << find_unique_ele(arr, 7);
    return 0;
}