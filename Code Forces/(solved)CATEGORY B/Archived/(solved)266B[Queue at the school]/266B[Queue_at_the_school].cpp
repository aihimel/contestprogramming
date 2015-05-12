#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int number, time;
	
	int register i, j;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> number >> time; !IN.eof(); IN >> number >> time){
		
		char data[number];
		
		for(i = 0; i < number; i++){
		
			IN >> data[i];
		
			}
		
		for(i = 0; i < time; i++){
			
			for(j = 0; j < number-1 ; j++){
				
				if(data[j] == 'B' && data[j+1] == 'G'){
					
					data[j] = 'G'; data[j+1] = 'B'; j++;
					
					}
				
				}
			
			}
		
		for(i = 0; i < number; i++) cout << data[i];
		cout << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
