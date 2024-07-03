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
    // 2 12 10 15 20
    for(int i=0;i<n;i++){ //20 12 10 15 2
        int min = i; // min=0,1,2,2,4
        for(int j=i+1;j<n;j++){// i=0
            if(arr[j] < arr[min]) //
                min = j;
        }

        swap(arr[i], arr[min]); 
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}






















    // for(int i=0;i<n;i++){
    //     int min_ele = arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j] < min_ele)
    //             min_ele = arr[j];
    //     }

    //     swap(arr[i], min_ele);
    // }