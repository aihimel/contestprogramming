#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

//bool sort_logic(int i, int j);
//void pr(int data[], int length);

// EOF Termination
int main(){
	
	int __initial_input, __case_number;
	
	float a, b, min, max;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		for(__case_number = 1; __case_number <= __initial_input; __case_number++){
			
			IN >> a >> b;
			
			if(a > b) {
				max = a; min = b;
				} else {
					max = b; min = a;
					}
			
			cout << "Case " << __case_number << ": " << endl;
			
			//cout << (float) (max/min) << " " << (float) (a/(a+b)) << endl;
			
			printf("%f %f\n", max/min, (a/(a+b)));
			
			}
		
		
		}
	
	//input.close();
	
	return 0;
	
	}

// Input Termination
/*int main(){
	
	int __initial_input;
	
	for(cin >> __initial_input; __initial_input != 0; cin >> __initial_input){
		
		cout << "Initail Input ::" << __initial_input << endl;
		
		}
	
	return 0;
	
	}*/

// Case Number
/*int main(){
	
	int __initial_input, __case_number;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input, __case_number = 1; __case_number <= __initial_input; __case_number++){
		
		cout << "Case #" << __case_number << endl;
		
		}
	
	//input.close();
	return 0;
	
	}


bool sort_logic(int i, int j){
	
	return i > j;
	
	}

void pr(int data[], int length){
	
	int i;
	for(i = 0; i< length; i++) cout << data[i] << " ";
	cout << endl;
	
	}

*/
