#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    int s = 0, e = letters.size() - 1;
    char ans = 'z';
    int flag = 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (letters[mid] > target && letters[mid] <= ans)
        {
            ans = letters[mid];
            e = mid - 1;
            flag = 0;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (flag)
    {
        return letters[0];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    char target;
    cin>>target;
    vector<char>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<nextGreatestLetter(arr, target);
    return 0;
}
