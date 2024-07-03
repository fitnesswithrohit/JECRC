#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e) {
    vector<int> temp; 
    int left = s;      
    int right = mid + 1;

    while (left <= mid && right <= e) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    if(left > mid){
        while (right <= e) {
        temp.push_back(arr[right]);
        right++;
    }
    }
    else{     
        while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    }

    for (int i = s; i <= e; i++) {
        arr[i] = temp[i-s];
    }
}

void mergeSort(vector<int> &arr, int s, int e) {
    // if(s>=e) return ;
    if (s < e) {
    int mid = (s + e) / 2 ;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n); //{9, 4, 7, 6, 3, 1, 5}

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }

    return 0 ;
}



















// void merge(vector<int> &arr, int s, int mid, int e) {
//     vector<int> temp; 
//     int left = s;      
//     int right = mid + 1;

//     while (left <= mid && right <= e) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= e) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = s; i <= e; i++) {
//         arr[i] = temp[i];
//     }
// }

// void mergeSort(vector<int> &arr, int s, int e) {
//     if (s >= e) return;
//     int mid = (s + e) / 2 ;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     merge(arr, s, mid, e);
// }