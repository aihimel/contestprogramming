#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

int main(){
	
	string data;
	
	int register i, j;
		
	for(IN >> data; !IN.eof(); IN >> data){
		
		for(i = 0; i < (signed) data.size(); i++){
			
			for(j = i+1; j < (signed) data.size(); j++){
				
				if(data.at(i) == data.at(j)) {
					
					data.erase(j, 1);
					j--;
					
					}
				
				}
			
			}
	
		if((signed) data.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
			else cout << "IGNORE HIM!" << endl;
		
		}
	
	return 0;
	
	}
