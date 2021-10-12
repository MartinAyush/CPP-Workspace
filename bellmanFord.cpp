#include<bits/stdc++.h>
using namespace std;
#define inf (int)1e9

void insert(vector<pair<int, int>> adj[], int u, int v, int wg){
    adj[u].push_back({v, wg});
}

void bellmanFord(vector<pair<int, int>> adj[], int v, int s){
    vector<int> distance(v, inf);
    distance[s] = 0;

    // do n-1 relaxations on edges
    for(int i = 0; i <= v-1; i++){
        for(auto x : adj[i]){
            if(distance[x.first] > distance[i] + x.second){
                distance[x.first] = distance[i] + x.second;
            }
        }
    }

    // negative weight cycle detection
    bool flag = true;
    for(int i = 0; i <= v-1; i++){
        for(auto x : adj[i]){
            if(distance[x.first] > distance[i] + x.second){
                cout << "Negative weight cycle\n";
                flag = false;
            }
        }
    }

    if(flag){
        for(int x : distance){
            cout << ((x == inf) ? -1 : x) << " ";
        }
        cout << '\n';
    }
}

int main(){
    int v = 3;
    vector<pair<int, int>> adj[v];
    // does not contain -ve weight cycle
    // insert(adj, 0, 1, 1);
    // insert(adj, 0, 2, 4);
    // insert(adj, 1, 2, -3);
    // insert(adj, 1, 3, 2);
    // insert(adj, 2, 3, 3);

    // contains -ve weight cycle
    insert(adj, 0, 1, -1);
    insert(adj, 1, 2, -2);
    insert(adj, 2, 0, -3);

    int source = 0;
    bellmanFord(adj, v, source);
    return 0;
}