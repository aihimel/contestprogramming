#include <iostream>
//#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

//bool sort_logic(int i, int j);
//void pr(int data[], int length);

// EOF Termination
int main(){
	
	long long unsigned int __initial_input, i, j;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		int data[__initial_input];
		
		data[0] = 1;
		data[1] = 2;
		data[2] = 3;
		data[3] = 4;
		data[4] = 5;
		
		for(i = 0, j = i + 5; j < __initial_input; i++, j += 2){
			
			data[j] = data[i];
			
			if(j+1 < __initial_input ) data[j+1] = data[i];
			
			}
		
		switch(data[__initial_input-1]){
			
			case 1:
				cout << "Sheldon" << endl;
				break;
			case 2:
				cout << "Leonard" << endl;
				break;
			case 3:
				cout << "Penny" << endl;
				break;
			case 4:
				cout << "Rajesh" << endl;
				break;
			case 5:
				cout << "Howard" << endl;
				break;
			default:
				break;
			
			}
			
		}
	
	//input.close();
	
	return 0;
	
	}
