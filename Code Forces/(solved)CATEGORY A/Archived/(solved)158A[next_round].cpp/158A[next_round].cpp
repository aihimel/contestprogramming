#include <iostream>
#include <string>
#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, k, i, result;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input >> k; !IN.eof(); IN >> __initial_input >> k){
		
		int data [ __initial_input ];
		
		for(i = 0; i < __initial_input; i++){
			
			IN >> data [ i ];
			
			}
		
		for(i = 0, result = 0; i < k; i++){
			
			if(data[i] > 0) result++;
			
			}
		
		for(i = k-1; i < __initial_input; i++){
		
			if( (data [ i ] > 0) && ( data [ i ] == data [ i + 1 ] ) ) result++;
				else break;
			
			}
		
		cout << result << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
