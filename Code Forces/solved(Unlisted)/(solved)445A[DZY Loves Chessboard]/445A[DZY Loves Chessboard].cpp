#include <bits/stdc++.h>
#define IN cin
#define INF -1

using namespace std;

// Directional array
int direction [] [4] = {
	
	{ -1, +1,  0,  0},
	
	{  0,  0, -1, +1}
	
	};

char __adj[101][101];
int __row, __col;

void dfs(int row, int col);
void print_array();

int main(){
	
	fstream input; input.open("input.txt");
	
	int i, j;
	
	for(IN >> __row >> __col; !IN.eof(); IN >> __row >> __col){
		for(i = 1; i <= __row; i++) for(j = 1; j <= __col; j++) IN >> __adj[i][j];
		
		for(i = 1; i <= __row; i++){
			for(j = 1; j <= __col; j++){
				if(__adj[i][j] == '.') dfs(i, j);
			}
		}
		
		print_array();
	}
	
	input.close();
	
	return 0;
}


void dfs(int row, int col){
	char adj_color; int i, __adj_row, __adj_col;
	if(__adj[row][col] == '.'){
		__adj[row][col] = 'B';
		adj_color = 'W';
	} else if(__adj[row][col] == 'B') adj_color = 'W';
		else adj_color = 'B';
	
	for(i = 0; i < 4; i++){
		
		__adj_row = row + direction[0][i]; 
		__adj_col = col + direction[1][i];
		
		if((__adj_row >= 1 && __adj_row <= __row) &&(__adj_col >= 1 && __adj_col <= __col)){
			
			if(__adj[__adj_row][__adj_col] == '.'){
				
				__adj[__adj_row][__adj_col] = adj_color;
				dfs(__adj_row, __adj_col);
				
			}
			
		}
	}
}

void print_array(){
	int i, j;
	
	for(i = 1; i <= __row; i++){
		for(j = 1; j <= __col; j++){
			cout << __adj[i][j];
		}
		cout << endl;
	}
}
