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
	
	int k, l, m, n, d, injured_dragons;
	
	int register i;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> k; !IN.eof(); IN >> k){
		
		IN >> l >> m >> n >> d;
		
		int data[d+1];
		
		for(i = 1; i <= d ; i++) data[i] = 0;
		
		for(i = k; i <= d; i += k) data[i] = 1;
		for(i = l; i <= d; i += l) data[i] = 1;
		for(i = m; i <= d; i += m) data[i] = 1;
		for(i = n; i <= d; i += n) data[i] = 1;
		
		for(i = 1, injured_dragons = 0; i <= d; i++) if(data[i] == 1) injured_dragons++;
		
		cout << injured_dragons << endl;
		
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
