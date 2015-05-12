#include <iostream>
#include <stdio.h>
#include <vector>
#define IN cin
#define INF -1

using namespace std;

int main(){
	
	int node, row, col, cost, result;
	int register i, j, k;
	
	for(IN >> node; !IN.eof(); IN >> node){
		
		// Initializing the two dimensional vector.
		vector <vector <int> > data(node, vector<int>(node, INF));
		//int adjecency[node][node], dist[node][node];
		
		// Initilizing the adjecency matrix;
		//for(i = 0; i < node ; i++) for(j = 0; j < node; j++) adjecency[i][j] = INF;
		
		for(i = 0; i < node; i++){
			scanf("%d %d %d", &row, &col , &cost); //IN >> row >> col >> cost;
			row--; col--;
			data.at(row).at(col) = cost;
			data.at(col).at(row) = cost;
		}
		
		// Copying to distance array
		//for(i = 0; i < node ; i++) for(j = 0; j < node; j++) dist[i][j] = adjecency[i][j];
		
		// Floyed-Warshall Algorithm
		for(k = 0; k < node; k++)
			for(i = 0; i < node; i++)
				for(j = 0 ; j < node; j++)
					if(data.at(i).at(k) != INF && data.at(k).at(j) != INF && i != k && k != j && j != i) {
						if(data.at(i).at(j) != INF){
							if(data.at(i).at(k) + data.at(k).at(j) < data.at(i).at(j)) data.at(i).at(j) = data.at(i).at(k) + data.at(k).at(j);
						} else{
							data.at(i).at(j) = data.at(i).at(k) + data.at(k).at(j);
						}
					}
		
		// Calculating time for each persident			
		for(i = 0; i < node; i++){
			for(j = result = 0; j < node ; j++){
				if(data.at(i).at(j) != INF) result += data.at(i).at(j);
			}
			cout << result << " ";
		}
		
		cout << endl;
		
	}
	
	return 0;
	
}
