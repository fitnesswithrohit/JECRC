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

    for(int i=1;i<n;i++){ // 12 11 13 5 6
        int temp = arr[i];// temp=11
        int j;  // 12 
        for(j=i-1;j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}