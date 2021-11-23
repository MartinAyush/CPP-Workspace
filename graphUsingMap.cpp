#include<bits/stdc++.h>
using namespace std;

void insNode(unordered_map<char, list<pair<char, int>>> &adj, int u, int v, int wg){
    adj[u].push_back({v, wg});
}

void print(unordered_map<char, list<pair<char, int>>> adj){
    for(auto &[f, s] : adj){
        cout << f << "->";
        for(auto &[ff, ss] : s){
            cout << ff << " " << ss << ", ";
        }
        cout << "\n";
    }
}

void bfsHelper(unordered_map<char, list<pair<char, int>>> adj, char start, map<char, bool> &vis){
    queue<char> q;
    q.push(start);
    vis[start] = true;
    while(!q.empty()){
        char x = q.front();
        q.pop();
        cout << x << " ";
        for(auto &[f, s] : adj[x]){
            if(vis[f] != true){
                q.push(f);
                vis[f] = true;
            }
        }
    }
}

void bfs(unordered_map<char, list<pair<char, int>>> adj){
    map<char, bool> vis;
    for(auto &[f, s] : adj){
        if(vis[f] != true){
            bfsHelper(adj, f, vis);
        }
    }    
}

int main(){
    unordered_map<char, list<pair<char, int>>> adj;
    insNode(adj, 'A', 'B', 2);
    insNode(adj, 'B', 'E', 3);
    insNode(adj, 'E', 'D', 3);
    insNode(adj, 'C', 'D', 2);
    insNode(adj, 'D', 'B', 4);
    insNode(adj, 'A', 'C', 4);
    insNode(adj, 'Y', 'Z', 10);
    // print(adj);
    bfs(adj);

    return 0;
}