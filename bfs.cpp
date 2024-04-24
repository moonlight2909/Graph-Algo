#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

int v;
void add_edge(int src,int des,bool flag = true){
    graph[src].push_back(des);
    if(flag==true){
        graph[des].push_back(src);
    }
}
void bfs(int src,int des, vector<int>&distance){
    queue<int> q;
    visited.clear();
    distance.resize(v,INT16_MAX);
    distance[src]=0;
    visited.insert(src);
    q.push(src);
    while(not q.empty()){
        int curr = q.front();
        q.pop();
        distance.push_back(curr);
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){
                q.push(neighbour);
                virtual.insert(neighbour);
                // distance[neighbour]=distance[curr];
            }
        }
    }
}

int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize();
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    int x,y;
    cin>>x>>y;
    vector<int> distance;
    bfs(x,y,distance);
    // for(auto path : result){
    //     for(auto ele : path){
    //         cout<<ele<<" "l
    //     }
    //     cout<<endl;
    // }
    // return 0;
    for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<endl;
    }

}
