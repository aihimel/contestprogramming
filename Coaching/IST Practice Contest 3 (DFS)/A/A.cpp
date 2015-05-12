#include <bits/stdc++.h>
#define INF -1
#define IN input
#define MAX 2001

using namespace std;

int __nodes, __edges;
vector < int > __status, __edges_list[2];

bool dfs(int node);

int main(){
	
	int i;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> __nodes; __nodes != 0; IN >> __nodes){
		
		IN >> __edges;
		
		__edges_list.empty();
		
		if(dfs(0)) cout << "BICOLORABLE." << endl;
			else cout << "NOT BICOLORABLE." << endl;
	
	}
	input.close();
	return 0;	
}

bool dfs(int node){
	return true;
}
