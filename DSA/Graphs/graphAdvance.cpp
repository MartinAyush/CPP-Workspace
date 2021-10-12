#include<bits/stdc++.h>
using namespace std;
#define inf (int)1e9

// *TODO* 
// Kruskal's algo for Minumun spannin tree (MST)
// Articulation Point
// Bridges in graph
// Tarjan's Algorithm

// shortest path
// if graph is unweighted -> bfs --> O(V+E)
// if directed and acyclic graph (DAG) -> topological sort then relax(u, v) --> O(V+E)
// if graph does not contain -ve weight edges -> Dijkstra --> O(V+E*log(V))
// graph can contain -ve weight edges -> Bellman Ford --> O(V*E)


void insert(vector<pair<int, int>> adj[], int u, int v, int wg){
    adj[u].push_back({v, wg});
}

void print(vector<pair<int, int>> adj[], int v){
    for(int i = 0; i < v; i++){
        cout << i << " ";
        for(auto x : adj[i]){
            cout << x.first << " " << x.second << " ";
        }
        cout << '\n';
    }
}

void shortPath(vector<pair<int, int>> adj[], int v, int s){
    vector<int> distance(v, inf);
    vector<int> indegree(v);
    queue<int> q;
    vector<int> tAns; // ans of topological sort
    distance[s] = 0;

    for(int i = 0; i < v; i++){
        for(auto x : adj[i]){
            indegree[x.first]++;
        }
    }

    for(int i = 0; i < indegree.size(); i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        tAns.push_back(x);
        for(auto u : adj[x]){
            indegree[u.first]--;
            if(indegree[u.first] == 0){
                q.push(u.first);
            }
        }
    }


    for(int u : tAns){
        for(auto v : adj[u]){
            if(distance[v.first] > distance[u] + v.second){
                distance[v.first] = distance[u] + v.second;
            }
        }
    }

    for(int x : distance){
        (x == inf) ? cout << "-1 " : cout << x << " ";
    }

}

// Shortest path in directed ascyclic graph(DAG)
void shortestPath(){
    int v = 6;
    vector<pair<int, int>> adj[v];
    insert(adj, 0, 1, 2);
    insert(adj, 0, 4, 1);
    insert(adj, 1, 2, 3);
    insert(adj, 4, 2, 2);
    insert(adj, 4, 5, 4);
    insert(adj, 2, 3, 6);
    insert(adj, 5, 3, 1);
    // print(adj, v);
    int source = 0;
    shortPath(adj, v, source);
}

int main(){
    shortestPath();
    
    return 0;
}