#include<iostream>
using namespace std;

// selection sort mai hum sabse minimum element ko index 'i' par element se swap karte jate hai till last index.
// TC- O(n^2)
// SC- O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag = false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!flag) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}