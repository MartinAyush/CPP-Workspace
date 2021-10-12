#include<bits/stdc++.h>
using namespace std;
//    edge
// u  ----->   v

// topological sort -- imp [kahn's algo]

void pushNode(vector<int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void printNode(vector<int> adj[], int v){
    for(int i = 0; i < v; i++){
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << '\n';
    }
}

// void bfs(vector<int> adj[], int vertices, int s){
//     bool visited[vertices+1];
//     for(int i = 0; i < vertices; i++){
//         visited[i] = false;
//     }
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     while(!q.empty()){
//         int u = q.front();
//         cout << u << " ";
//         q.pop();
//         for(int x : adj[u]){
//             if(visited[x] == false){
//                 visited[x] = true;
//                 q.push(x);
//             }
//         }
//     }
// }

void bfs(vector<int> adj[], int s, bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front();
        cout << u << " ";
        q.pop();
        for(int x : adj[u]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void bfsnc(vector<int> adj[], int v){
    bool visited[v+1];
    for(int i = 0; i < v; i++){
        visited[i] = false;
    }
    for(int i = 0; i < v; i++){ // handle disconnected graph
        if(visited[i] == false){
            bfs(adj, i, visited);
        }
    }
}

void dfsrec(vector<int> adj[], int n, bool visited[]){
    visited[n] = true;
    cout << n << " ";
    for(int x : adj[n]){
        if(visited[x] == false){
            dfsrec(adj, x, visited);
        }
    }
}

void dfs(vector<int> adj[], int v){
    bool visited[v+1];
    for(int i = 0; i < v; i++){
        visited[i] = false;
    }
    for(int i = 0; i < v; i++){ // handle disconnected graph
        if(visited[i] == false){
            dfsrec(adj, i, visited);
        }
    }
}

// Detect cycle in Undirected graph
bool cycleUnDir(vector<int> adj[], int n, bool visited[], int parent){
	visited[n] = true;
	for(int x : adj[n]){
		if(visited[x] == false){
			if(cycleUnDir(adj, x, visited, n) == true){
				return true;
			}
		}else if(x != parent){
			return true;
		}
	}
	return false;
}

bool detectCycleUndir(vector<int> adj[], int v){
	bool visited[v];
	for(int i = 0; i < v; i++){
		visited[i] = false;
	}
	for(int i = 0; i < v; i++){
		if(visited[i] == false){
			if(cycleUnDir(adj, i, visited, -1) == true){
				return true;
			}
		}
	}
	return false;
}

// Detect cycle in Directed graph
bool cycleDir(vector<int> adj[], int n, bool visited[], bool callStack[]){
	visited[n] = true;
	callStack[n] = true;
	for(int x : adj[n]){
		if(visited[x] == false){
			if(cycleDir(adj, x, visited, callStack) == true){
				return true;
			}
		}else if(callStack[x] == true){
			return true;
		}
	}
	callStack[n] = false;
	return false;
}

bool detectCycleDir(vector<int> adj[], int v){
	bool visited[v];
	bool callStack[v];
	for(int i = 0; i < v; i++){
		visited[i] = false;
		callStack[i] = false;
	}
	for(int i = 0; i < v; i++){
		if(visited[i] == false){
			if(cycleDir(adj, i, visited, callStack) == true){
				return true;
			}
		}
	}
	return false;
}

int main(){
    int v = 4;
    vector<int> adj[v];
    pushNode(adj, 0, 1);
    pushNode(adj, 1, 2);
    pushNode(adj, 0, 2);
    pushNode(adj, 2, 3);
    // printNode(adj, v);
    bfsnc(adj, v);
    // dfs(adj, v);
    // cout << detectCycleDir(adj, v);
    return 0;
}