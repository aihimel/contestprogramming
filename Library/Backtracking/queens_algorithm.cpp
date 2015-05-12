#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN input

using namespace std;

//bool sort_logic(int i, int j);
//void pr(int data[], int length);
//int sum(int beg, int end, int data[]);
//vector <string> explode(string data, char delim);

// EOF Termination
int main(){
	
	int __initial_input, __case_number;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		for(__case_number = 1; __case_number <= __initial_input; __case_number++){
		
			cout << "Case #" << __case_number << endl;
		
			}
		
		
		}
	
	input.close();
	
	return 0;
	
	}

// Input Termination
/*
int main(){
	
	int __initial_input;
	
	for(cin >> __initial_input; __initial_input != 0; cin >> __initial_input){
		
		cout << "Initail Input ::" << __initial_input << endl;
		
		}
	
	return 0;
	
	}
*/

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

/*
// Usage of sort function sort(data, data+n, sort_logic);
bool sort_logic(int i, int j){
	
	return i > j;
	
	}
*/

/*
void pr(int data[], int length){
	
	int i;
	for(i = 0; i< length; i++) cout << data[i] << " ";
	cout << endl;
	
	}
*/

/*
int sum(int beg, int end, int data[]){
	
	int result;
	int register i;
	
	for(i = beg, result = 0; i <= end; i++) result += data[i];
	
	return result;
	
	}
*/

/*
// Explode function like PHP.
vector <string> explode(string data, char delim){
	
	vector <string> result;
    string temp;
    
	int register i;
	
	for(i = 0, temp = ""; i < (signed) data.size(); i++){
		
		if(data.at(i) != delim){
			
			temp += data.at(i);
			//cout << temp << endl;
			} else {
				//cout << temp << endl;
				result.push_back(temp);
				temp = "";
				
				}

		}
	
	result.push_back(temp);

    return result;
	
	}
*/
