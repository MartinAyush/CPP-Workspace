#include<bits/stdc++.h>
using namespace std;

// Kahn's algorithm

void display(vector<int> adj[], int v){
    for(int i = 0; i < v; i++){
        cout << i << " ";
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << '\n';
    }
}

void insert(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main(){
    int v = 5;
    vector<int> adj[v];
    vector<int> indegree(v);
    queue<int> q;

    insert(adj, 0, 2);
    insert(adj, 0, 3);
    insert(adj, 2, 3);
    insert(adj, 1, 3);
    insert(adj, 1, 4);

	// calculating indegree
	for(int i = 0; i < v; i++){
		for(auto x : adj[i]){
			indegree[x]++;
		}
	}

    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }   
    }
    while(q.empty() == false){
        int top = q.front();
        cout << top << " ";
        q.pop();
        for(int x : adj[top]){
            indegree[x]--;
            if(indegree[x] == 0){
                q.push(x);
            }
        }
    }

    return 0;
}
