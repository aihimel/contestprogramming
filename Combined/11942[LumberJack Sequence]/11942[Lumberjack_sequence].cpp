#include <iostream>
#include <string>
#include <fstream>
#define IN cin

using namespace std;


// Case Number
int main(){
	
	int __initial_input, __case_number, i, data[10];
	bool ordered = true;
	
	ifstream input;
	input.open("input.txt");
	
	cout << "Lumberjacks:" << endl;
	
	for(IN >> __initial_input, __case_number = 1; !IN.eof(); __case_number++){
		
		for(i = 0; i < 10 ; i++) IN >> data[i];
		
		for(i = 0; i < 10-1 ; i++){
			
			if (data[i] >= data[i+1]) ordered = true;
				else {
					ordered = false;
					break;
					}
			
			}
		
		for(i = 0; (i < 10-1) && !ordered ; i++){
			
			if (data[i] <= data[i+1]) ordered = true;
				else {
					ordered = false;
					break;
					}
			
			}
		
		if(ordered) cout << "Ordered" << endl;
			else cout << "Unordered" << endl;
		
		if(__case_number == __initial_input){
			
			IN >> __initial_input;
			
			__case_number = 1;
			cout << "here";
			}
		
		}
	
	input.close();
	return 0;
	
	}
