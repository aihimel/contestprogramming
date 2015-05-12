#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, __case_number, value;
	string statement;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input, value = 0; !IN.eof(); IN >> __initial_input, value = 0){
		
		for(__case_number = 1; __case_number <= __initial_input; __case_number++){
			IN >> statement;
			//cout << "OK" << endl;
			if(statement.at(0) == '+' || statement.at(2) == '+') value++;
				else if(statement.at(0) == '-' || statement.at(2) == '-') value--;
		
			}
		
		cout << value << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
