#include<bits/stdc++.h>
using namespace std;
// template <typename T>

//undirected - false
//directed - true;

class graph{
    public:
    unordered_map<int,list<int> >mp;
    // unordered_map<T,list<T> >mp;

    void add(int a, int b, bool direction){
    // void add(T a, T b, bool direction){
        mp[a].push_back(b);
        if(direction==0){
            mp[b].push_back(a);
        }
    }
    0-1
    1-2
    0-2
    1-4

    // map <node, list>
    // 0-1,2
    // 1-2,4
    // 2-0,1
    // 4-1,

    void print(){
        for(auto i:mp){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n,m;// n-vertex, m-edges
    cin>>n>>m;

    graph gh;
    // graph<int> gh;

    for(int i=0;i<m;i++){
        int a,b; 
        cin>>a>>b;
        gh.add(a,b,0);
    }

    gh.print();

    return 0;
}
