#include <bits/stdc++.h>
#define IN input
#define MAX 301

using namespace std;

int nodes; // Number of nodes
short node_list[MAX]; // Value for each node
char adj[MAX][MAX]; // Relation between the nodes 0/1

void dfs(int node);

int main(){
	fstream input; input.open("input.txt");
	
	int i;
	
	for(IN >> nodes; !IN.eof(); IN >> nodes){
		
		// Taking all nodes in the node_list
		for(i = 1; i <= nodes; i++) IN >> node_list[i];
		
		// Input for Adjecency matrix
		for(i = 1; i <= nodes; i++)
			IN >> adj[i];
		
		// Calling dfs for each and every node one by one
		for(i = 1; i <= nodes; i++) dfs(i);
		
		// Outputting the new order of the nodes
		for(i = 1; i <= nodes; i++) cout << node_list[i] << " ";
		
		cout << endl;
		
	}
	
	input.close();
	return 0;
}

// The Depth First Search functin (dfs)
void dfs(int node){ // node = node_list[index] of the node
	//cout << node << endl;
	int i;
	
	for(i = 1; i <= node; i++){ // Is connected or not.
		
		if(adj[node][i-1] == '1'){
			
			if(node_list[node] < node_list[i]){
				
				swap(node_list[node], node_list[i]);
	
				
			}
			
			
		
		}
		
	}
	
	//~ for(i = node + 1; i <= nodes; i++){ // Right child traversal
		//~ 
		//~ if(adj[node][i-1] == '1'){ // is connected to the node or not
			//~ 
			//~ if(node_list[node] > node_list[i]){ // If root node is larger then the child node.
				//~ //cout << adj[node][i-1] << "  " << node_list[node] << ">>" << node_list[i] << endl;
				//~ swap(node_list[node], node_list[i]); // Swapping the value of the nodes.
				//~ dfs(i); // calling the dfs function with the child node indexes;
			//~ }
			//~ 
		//~ }
	//~ 
	//~ }
	
}
