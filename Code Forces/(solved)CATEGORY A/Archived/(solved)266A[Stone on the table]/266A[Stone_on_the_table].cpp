#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, __case_number, remove;
	string stones;
	register int i;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		remove = 0;
		IN >> stones;
		
		for(__case_number = 1; __case_number <= __initial_input; __case_number++){
			
			for(i = 0; (unsigned)i < stones.size()-1; i++){
				
				if(stones.at(i) == stones.at(i+1)) {
					
					stones.erase(i,1);
					i--;
					remove++;
					
					}
				}
			
			}
		
		cout << remove << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
