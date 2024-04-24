#include <bits/stdc++.h>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int s, int d, bool flag = true) {
    graph[s].push_back(d);
    graph[d].push_back(s);
    // if (flag == true) {
    //     graph[d].push_back(s);
    // }
}

unordered_set<int> visited;

bool dfs(int start, int end) {
    visited.insert(start);
    if (start == end) {
        return true;
    }
    for (auto ele : graph[start]) {
        if (not visited.count(ele)) {
            bool result = dfs(ele, end);
            if (result) {
                return true;
            }
        }
    }
    return false;
}

bool anypath(int src, int des) {
    visited.clear();
    return dfs(src, des);
}

int main() {
    cin >> v;
    int e;
    cin >> e;
    graph.resize(v);
    visited.clear();
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false);
    }

    int src, des;
    cout << "Enter source and destination vertices: ";
    cin >> src >> des;
    if (anypath(src, des)) {
        cout << "There is a path between " << src << " and " << des << endl;
    } else {
        cout << "There is no path between " << src << " and " << des << endl;
    }

    return 0;
}
