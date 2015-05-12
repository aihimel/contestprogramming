#include <bits/stdc++.h>
#define INF -1
#define IN input
#define MAX 3*10000

using namespace std;

int __destination, __data[MAX], __nodes;

bool dfs(int node);

int main(){
	
	int i;
	bool flag;
	ifstream input;
	input.open("input.txt");
	
	for(IN >> __nodes >> __destination, flag = false; !IN.eof(); IN >> __nodes >> __destination){
		for(i = 1; i <= __nodes; i++) IN >> __data[i];
		flag = dfs(1);
		if(flag) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	input.close();
	return 0;	
}

bool dfs(int node){
	if(__destination == node) return true;
	if(node > __destination) return false;
	return dfs(node + __data[node]);
}
