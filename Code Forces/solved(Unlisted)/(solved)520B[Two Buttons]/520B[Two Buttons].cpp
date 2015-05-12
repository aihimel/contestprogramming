#include <bits/stdc++.h>
#define INF -1
#define IN cin

using namespace std;

bool visited[10000*2+1];

int bfs(int source, int destination);

int main(){
	fstream input; input.open("input.txt");
	
	int source, destination;
	
	for(IN >> source >> destination; !IN.eof(); IN >> source >> destination){
		
		if(source >= destination) cout << source - destination << endl;
			else cout << bfs(source, destination) << endl;
	}
	
	input.close();
	return 0;
}


int bfs(int source, int destination){
	
	memset(visited, false, sizeof visited);
	
	pair < int , int > root, left_child, right_child;
	queue < pair < int , int > > Q;
	
	Q.push(pair < int , int > (source, 0));
	
	while(!Q.empty()){
		
		root = Q.front(); Q.pop();
		visited[root.first] = true;
		//~ cout << root.second << endl;
		left_child = root; left_child.first--; left_child.second++;
		right_child = root; right_child.first *= 2; right_child.second++;
		
		// Answer Cheacking
		if(root.first == destination) return root.second;
			else if(left_child.first == destination) return left_child.second;
				else if(right_child.first == destination) return right_child.second;
		
		// Outbound cheacking / negative value cheacking and pushing to the queue
		
		// Source is smaller then destination
		//~ if(source < destination){
			//~ if(left_child.first > 0) Q.push(left_child);
			//~ if(right_child.first < destination*2) Q.push(right_child);
		//~ } else {
			//~ if(left_child.first < source && left_child.first > 0) Q.push(left_child);
			//~ }
		
		if(left_child.first > 0 && !visited[left_child.first]) Q.push(left_child);
		if(right_child.first > 0 && right_child.first < destination * 2 && !visited[right_child.first]) Q.push(right_child);
		
		
	}
	
	return -1;

}
