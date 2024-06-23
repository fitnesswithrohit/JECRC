#include<bits/stdc++.h>
using namespace std;

// 2 5
// 1 0 5
// 1 1 7
// 1 0 3
// 2 1 0
// 2 1 1
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int> > arr(n, vector<int>());
    int last_answer = 0;
    vector<int> answers;
    while(q--){
        int id,x,y;
        cin>>id>>x>>y;
        if (id==1){
            int idx = (x^last_answer)%n;
            arr[idx].push_back(y);
        }
        else if (id==2){
            int idx = (x^last_answer)%n;
            last_answer = arr[idx][y % arr[idx].size()];
            answers.push_back(last_answer);
        }
    }

    for(int i=0;i<answers.size();i++){
        cout<<answers[i]<<" ";
    }

    return 0;
}





// vector<int> dynamicArray(int n, vector<vector<int> > queries) {
//     int nofQueries = queries.size();
//     int lastAnswer = 0;
//     int temp, len;
//     vector<int> answers;
//     vector<vector<int>> seq(n);
//     for (int i = 0; i < nofQueries; i++) {
//         if (queries[i][0] == 1) {
//             seq[(queries[i][1]^lastAnswer)%n].push_back(queries[i][2]);
//         } else {
//             temp = (queries[i][1]^lastAnswer)%n;
//             len  = seq[temp].size();
//             lastAnswer = seq[temp][queries[i][2]%len];
//             answers.push_back(lastAnswer);
//         }
//     }
//     return answers;
// }