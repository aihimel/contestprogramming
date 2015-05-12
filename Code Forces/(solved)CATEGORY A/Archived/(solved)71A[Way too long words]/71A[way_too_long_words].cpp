#include <iostream>
#include <string>
#include <fstream>
#define IN input

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, __case_number;
	string data;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		for(__case_number = 1, IN >> data; __case_number <= __initial_input; __case_number++, IN >> data){
		
			if(data.size() > 10){
				
				cout << data.at(0) << data.size()-2 << data.at(data.size()-1) << endl;
				
				} else cout << data << endl;
		
			}
		
		
		}
	
	input.close();
	
	return 0;
	
	}
