#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int matches;
	
	register int i, j;
	
	string data;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> data, matches = 0; !IN.eof(); IN >> data, matches = 0){
		//cout << data << endl;
		if(data.size() >= 7){
			
			for(i = 0; ((unsigned)i < data.size() - 6); i++, matches = 0){
				
				for(j = i+1; j < i+7; j++){
					
					if((data.at(i) == data.at(j))) {
						
						matches++;
						//cout << "[" << i << "]" << data.at(i) << " " << "[" << j << "]" << data.at(j) << " " << matches << endl;
						if(matches >= 6) break;
						
						}else {
							matches = 0;
							break;
							}
					
					}
				
				if(matches >= 6) break;
				
				}
			
			}
		
		//cout << matches << endl; 
		
		if(matches >= 6) cout << "YES" << endl;
			else cout << "NO" << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
