#include <bits/stdc++.h>
#define INF -1
#define IN input
#define MAX 20000

using namespace std;

// Adjcency matrix
int adj[MAX][MAX];

int nodes, edges; // total number of nodes and edges.

int dist[MAX]; // Distence from the source

int previous[MAX]; // Previous or parent nodes

bool visited[MAX]; // Visited or not

void dijkstra(int source, int destination);

int main(){
	
	fstream input; input.open("input.txt");
	
	int cases, case_no, i, j, source, destination, a, b, c;
	
	IN >> cases;
	
	for(case_no = 1; case_no <= cases; case_no++){
		
		cout << "Case #" << case_no << ": ";
		
		IN >> nodes >> edges >> source >> destination;
		
		// Initializing the adjcency matrix.
		for(i = 0; i < nodes; i++)for(j = 0; j < nodes; j++)adj[i][j] = INF;
		
		for(i = 0; i < edges; i++){
			
			IN >> a >> b >> c;
			if(adj[a][b] == INF) adj[a][b] = adj[b][a] = c;
				else adj[a][b] = adj[b][a] = min(adj[a][b], c);
			
		}
		
		// dijkstras function call
		dijkstra(source, destination);
		
		if(dist[destination] == INF) cout << "unreachable" << endl;
			else cout << dist[destination] << endl;
			
	}
	
	input.close();
	
	return 0;
}

// dijkstra
void dijkstra(int source, int destination){
	
	memset(dist, INF, sizeof dist);
	memset(previous, INF, sizeof previous);
	memset(visited, false, sizeof visited);
	
	queue < int > Q;
	
	int root, child, i, cost;
	
	root = source;
	
	previous[root] = INF; dist[root] = 0; 
	
	Q.push(root);
	
	while(!Q.empty()){
		
		root = Q.front(); Q.pop();
		
		// Find all child of root node
		for(i = 0; i < nodes; i++){
		
			if(adj[root][i] != INF){
				
				child = i;
		
				cost = adj[root][child] + dist[root];
		
				if(dist[child] == INF){
					
					dist[child] = cost;
					previous[child] = root;
					
				} else {
					
					if(cost < dist[child]){
						
						dist[child] = cost;
						previous[child] = root;
						
					}
					
				}
				
				if(!visited[child]) Q.push(child);
				
			}
			
		}
		
		visited[root] = true; // coloring the node as visited.
	
	}
	
}
