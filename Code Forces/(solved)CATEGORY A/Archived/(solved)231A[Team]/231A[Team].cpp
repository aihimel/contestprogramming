#include <iostream>
//#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, __case_number, solution, a, b, c;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input, solution = 0; !IN.eof(); IN >> __initial_input, solution = 0){
		
		for(__case_number = 1; __case_number <= __initial_input; __case_number++){
		
			IN >> a >> b >> c;
			
			if(a+b+c >= 2) solution++;
		
			}
		
		cout << solution << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
