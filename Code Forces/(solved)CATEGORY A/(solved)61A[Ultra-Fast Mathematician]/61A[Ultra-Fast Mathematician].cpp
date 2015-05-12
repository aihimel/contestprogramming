#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string first, second;
	int unsigned register i;
	
	for(IN >> first >> second; !IN.eof(); IN >> first >> second){
		for(i = 0; i < first.size(); i++){
			if(first.at(i) != second.at(i)) cout << '1';
				else cout << '0';
		}
		cout << endl;
	}
	
	return 0;
	
	}
