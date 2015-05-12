#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int m, n;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> m >> n; !IN.eof(); IN >> m >> n){
		
		cout << (m*n)/2 << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
