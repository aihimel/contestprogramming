#include <iostream>
//#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, __case_number, exit, enter, capacity, onboard;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		for(__case_number = 1, capacity = onboard = 0; __case_number <= __initial_input; __case_number++){
		
			IN >> exit >> enter;
			onboard -= exit; onboard += enter;
			if(capacity < onboard) capacity = onboard;
		
			}
		
		cout << capacity << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
