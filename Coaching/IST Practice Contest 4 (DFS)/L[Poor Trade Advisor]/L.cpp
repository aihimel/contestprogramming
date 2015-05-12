/*
 * Aftabul Islam
 * 
 * Lisense GPLv3
 * 
 * UVA 11749 Poor Trade Advisor
 * 
 * 04 May, 2015
 * 
 * */

#include <bits/stdc++.h>
#define INF -2147483647
#define IN cin

using namespace std;

// Global Variables
int __nodes;
signed int __max_ppa;
long long __edges;
bool __visited [501];
int __adj_list[501][501];

set < int > path_nodes;

int dfs(int node);

int main(){
	
	//~ ifstream IN;
	//~ IN.open("input.txt");
	
	int max_cities, a, b, c; long long i, j;
	
	for(IN >> __nodes >> __edges; __nodes != 0 && __edges != 0; IN >> __nodes >> __edges){
		
		max_cities = 0;
		__max_ppa = INF;
		memset(__visited, false, sizeof(__visited));
		//~ memset(__adj_list, INF, sizeof(__adj_list));
		
		for(i = 0; i <= __nodes; i++)for(j = 0; j <= __nodes; j++) __adj_list[i][j] = INF;
		//cout << __adj_list[2][3]<< endl;
		for(i = 0; i < __edges; i++){
			
			IN >> a >> b >> c;
			c = max(c, __adj_list[a][b]);
			__adj_list[a][b] = __adj_list[b][a] = c;
			__max_ppa = max(__max_ppa, c); // Selecting Maximum PPA
		
		}
		
		for(i = 1; i <= __nodes; i++ ){
			
			if(!__visited[i]){
				path_nodes.clear();
				__visited[i] = true;
				dfs(i);
				max_cities = max(max_cities, (signed) path_nodes.size());
			}
			
		}
		
		//~ cout << max_cities << " " << __max_ppa << endl;
		cout << max_cities << endl;
		
	}
		
	
	//~ input.close();
	return 0;

}


int dfs(int node){
	int total_nodes = 0;
	int i;
	
	__visited[node] = true;
	
	for(i = 1; i <= __nodes; i++){
		
		if(__adj_list[node][i] == __max_ppa && !__visited[i]) total_nodes += dfs(i);
		
	}
	path_nodes.insert(node);
	return (total_nodes + 1);
	
}
