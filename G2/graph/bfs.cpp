#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map<int, list<int> >&adj, vector<pair<int,int> >&edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;//{{1,2}{2,3}}
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void bfs(unordered_map<int,list<int> >&adj, unordered_map<int,bool> &visited, vector<int>&ans, int node){
    queue<int>q;//0
    q.push(node);//0
    visited[node] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);//0

        for(int i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex,vector<pair<int,int> > edges){
    unordered_map<int, list<int> > adj;
    vector<int> ans;
    unordered_map<int,bool> visited;

    prepareAdjList(adj, edges);

    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

void print_edges(vector<pair<int,int> > &edges){
    for(int i=0;i<edges.size();i++){
        pair<int, int> p = edges[i];
        cout<<p.first<<" "<<p.second<<"\n";
    }
}

int main(){
    int n,m;//vertex-n, edges-m
    cin>>n>>m;

    vector<pair<int,int> > edges;
    while(m--){
        int a,b;
        cin>>a>>b;
        edges.push_back(make_pair(a,b));
    }

    print_edges(edges);

    vector <int> ans = BFS(n, edges);
    printAns(ans);
}