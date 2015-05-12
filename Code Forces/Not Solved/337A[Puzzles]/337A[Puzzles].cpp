#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN input

using namespace std;

bool sort_logic(int i, int j);
void pr(int data[], int length);

// EOF Termination
int main(){
	
	int students, jigsaw, difference;
	
	int register i, j, k, l;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> students >> jigsaw; !IN.eof(); IN >> students >> jigsaw){
		
		int data[jigsaw], combination[students];
		
		difference = 1000;
		
		for(i = 0; i < jigsaw; i++) IN >> data[i];
		
		for(i = 0; i < jigsaw - 3; i++){
			
			for(j = i+1; j < jigsaw - 2; j++){
				
				for(k = j+1; k < jigsaw - 1; k++){
					
					for(l = k+1; l < jigsaw; l++){
						
						combination[0] = data[i];
						combination[1] = data[j];
						combination[2] = data[k];
						combination[3] = data[l];
						
						sort(combination, combination + 4, sort_logic);
						pr(combination, 4);
						if(difference > (combination[0] - combination[3]) ) difference = (combination[0] - combination[3]);
						
						}
					
					}
				
				}
			
			}
		
		cout << difference << endl;
		
		}
	
	input.close();
	
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
*/

bool sort_logic(int i, int j){
	
	return i > j;
	
	}

void pr(int data[], int length){
	
	int i;
	for(i = 0; i< length; i++) cout << data[i] << " ";
	cout << endl;
	
	}
