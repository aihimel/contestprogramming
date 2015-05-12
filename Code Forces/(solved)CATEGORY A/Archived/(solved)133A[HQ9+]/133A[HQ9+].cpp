#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	register int i;
	bool output;
	string data;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> data, output = false; !IN.eof(); IN >> data, output = false){
		
		for(i = 0; (unsigned)i < data.size(); i++){
			
			if(data.at(i) == 'H' || data.at(i) == 'Q' || data.at(i) == '9'){
				
				output = true;
				break;
				
				}
			
			}
		
		if(output) cout << "YES" << endl;
			else cout << "NO" << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
