#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#define IN input

using namespace std;

bool sort_logic(int i, int j);
void pr(int data[], int length);

// EOF Termination
int main(){
	
	int __initial_input, temp, taxi;
	
	register int i, j;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> __initial_input, taxi = 0; !IN.eof(); IN >> __initial_input, taxi = 0){
		
		int data[__initial_input];
		
		for(i = 0; i < __initial_input; i++){
			
			IN >> data[i];
			
			}
		
		sort(data, data+__initial_input, sort_logic);
		pr(data, __initial_input);
		
		for(i = 0; i < __initial_input; i++){
			
			if(data[i] == 4){

				taxi++;
				cout << taxi << endl;
				data[i] = 0;
				sort(data, data+__initial_input, sort_logic);
				pr(data, __initial_input);

				} else if(data[i] > 0){
					
					for(j = i+1; j < __initial_input ; j++){
						
						if(data[j] > 0){
							
							if(data[i]+data[j] == 4){
								
								taxi++;
								cout << taxi << endl;
								data[i] = 0;
								data[j] = 0;
								sort(data, data+__initial_input, sort_logic);
								pr(data, __initial_input);
								
								}
							
							} else break;
						
						}
					taxi++;
					cout << taxi << endl;
					data[i] = 0;
					sort(data, data+__initial_input, sort_logic);
					pr(data, __initial_input);
					
					}
			
			}
		
		cout << taxi << endl;
		
		}
	
	input.close();
	
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
