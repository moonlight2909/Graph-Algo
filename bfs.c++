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
    for(auto path : result){
        for(auto ele : path){
            cout<<ele<<" "l
        }
        cout<<endl;
    }
    return 0;

}
