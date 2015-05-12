#include <iostream>
#include <string>
#include <fstream>
#define IN cin

using namespace std;


// Case Number
int main(){
	
	int __initial_input, __case_number, length, i, j, swaps, temp;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input, __case_number = 1; __case_number <= __initial_input; __case_number++){
		
		IN >> length;
		
		int data[length];
		
		for(i = 0; i < length ; i++){
			
			IN >> data[i];
			
			}
		
		for(swaps = 0, i = length - 1; i > 0 ; i--){
			
			for(j = 0; j < i ; j++){
				
				if(data[j] > data[j+1]){
					
					temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
					swaps++;
					
					}
				
				}
			
			}
		
		cout << "Optimal train swapping takes " << swaps << " swaps."<< endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
