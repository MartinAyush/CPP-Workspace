#include<bits/stdc++.h>
using namespace std;
#define inf (int)1e9

/*

1) Initialize distances of all vertices as infinite.

2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or
   distance) is used used as first item  of pair
   as first item is by default used to compare
   two pairs

3) Insert source vertex into pq and make its
   distance as 0.

4) While either pq doesn't become empty
    a) Extract minimum distance vertex from pq.
       Let the extracted vertex be u.
    b) Loop through all adjacent of u and do
       following for every vertex v.

           // If there is a shorter path to v
           // through u.
           If dist[v] > dist[u] + weight(u, v)

               (i) Update distance of v, i.e., do
                     dist[v] = dist[u] + weight(u, v)
               (ii) Insert v into the pq (Even if v is
                    already there)

5) Print distance array dist[] to print all shortest
   paths.

*/


void insert(vector<pair<int, int>> adj[], int u, int v, int wg){
	adj[u].push_back({v, wg});
	adj[v].push_back({u, wg});
}

void shortestPath(vector<pair<int, int>> adj[], int v, int s){
	vector<int> distance(v, inf);
	distance[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	// distance && vertex
	pq.push({0, s});
	while(!pq.empty()){
		auto u = pq.top();
		pq.pop();
		for(auto v : adj[u.second]){
			if(distance[v.first] > distance[u.second] + v.second){
				distance[v.first] = distance[u.second] + v.second;
				pq.push({distance[v.first], v.first});
			}
		}
	}

	for(auto x : distance){
		cout << ((x == inf) ? -1 : x) << " ";
	}
	cout << '\n';

}

int main(){
	int v = 9;
	vector<pair<int, int>> adj[v];
	insert(adj, 0, 1, 4);
    insert(adj, 0, 7, 8);
    insert(adj, 1, 2, 8);
    insert(adj, 1, 7, 11);
    insert(adj, 2, 3, 7);
    insert(adj, 2, 8, 2);
    insert(adj, 2, 5, 4);
    insert(adj, 3, 4, 9);
    insert(adj, 3, 5, 14);
    insert(adj, 4, 5, 10);
    insert(adj, 5, 6, 2);
    insert(adj, 6, 7, 1);
    insert(adj, 6, 8, 6);
    insert(adj, 7, 8, 7);
	int source = 0;
	shortestPath(adj, v, source);
	return 0;
}