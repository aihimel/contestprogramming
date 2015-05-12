#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

int main(){
	
	string data;
	
	int number;
	
	int register i;
		
	for(IN >> data; !IN.eof(); IN >> data){
		
		for(i = 0, number = 0; (unsigned) i < data.size(); i++){
			
			if(data.at(i) == '4' || data.at(i) == '7') number++;
			
			}
		
		if(number == 4 || number == 7) cout << "YES" << endl;
		else cout << "NO" << endl;
				
		}
	
	return 0;
	
	}
