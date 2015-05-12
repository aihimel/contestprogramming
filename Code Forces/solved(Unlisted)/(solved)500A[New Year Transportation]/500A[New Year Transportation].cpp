#include <bits/stdc++.h>
#define IN cin

using namespace std;

int __cell_list[3*10000+1], __target_cell;
long __nodes;

bool dfs(int node);

int main(){
	
	//~ fstream input; input.open("input.txt");
	
	long i;
	
	for(IN >> __nodes >> __target_cell; !IN.eof(); IN >> __nodes >> __target_cell){
		
		for(i = 1; i < __nodes; i++) IN >> __cell_list[i];
		
		if(dfs(1)) cout << "YES" << endl;
			else cout << "NO" << endl;
		
	}
	
	//~ input.close();
	return 0;
}

bool dfs(int node){
	if (node == __target_cell) return true;
		else if (node > __target_cell) return false;
			else return dfs(node + __cell_list[node]);
}
