#include <bits/stdc++.h>
#define IN cin

using namespace std;

int __boys, __girls;

priority_queue < int > __boys_pq;
priority_queue < int > __girls_pq;

void clear(priority_queue < int > &PQ);

int main(){
	
	//~ fstream input; input.open("input.txt");
	
	int i, temp, pairs;
	
	for(IN >> __boys; !IN.eof(); IN >> __boys){
		
		for( i = 1, clear(__boys_pq); i <= __boys; i++){
			IN >> temp; __boys_pq.push(temp);
		}
		
		for(IN >> __girls, i = 1, clear(__girls_pq); i <= __girls; i++){
			IN >> temp; __girls_pq.push(temp);
		}
		
		for(pairs = 0; !__boys_pq.empty() && !__girls_pq.empty(); ){
			if(__boys_pq.top() == __girls_pq.top()){
				pairs++; __boys_pq.pop(); __girls_pq.pop();
			} else if( abs( __boys_pq.top() - __girls_pq.top()) == 1 ){
				pairs++; __boys_pq.pop(); __girls_pq.pop();
				} else if (abs( __boys_pq.top() - __girls_pq.top()) > 1){
					
					if( ( __boys_pq.top() - __girls_pq.top() ) > 0 ) __boys_pq.pop();
						else __girls_pq.pop();
					
					}
			
		}
		
		cout << pairs << endl;
		
	}
	
	//~ input.close();
	
	return 0;
}

void clear(priority_queue < int > &PQ){
	priority_queue < int > empty;
	swap(PQ, empty);
}
