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
	
	int groups, capacity, busses, passengers;
	
	int register i;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> groups; !IN.eof(); IN >> groups){
		
		IN >> capacity;
		
		int data[groups];
		
		for(i = 0; i < groups; i++){
			
			IN >> data[i];
			
			}
		
		busses = 0;
		passengers = 0;
		
		for(i= 0; i < groups; i++){
			
			//cout << "Before: " << " Groups: " << data[i] << " Passengers: " << passengers << " capacity : " << capacity << " busses: " << busses << endl;
			
			if(passengers < capacity && (passengers + data[i] <= capacity) ){
				
				passengers += data[i];
				
				} else {
					
					passengers = 0;
					busses++;
					i--;
					
					}
			
			
			//cout << "Before: " << " Groups: " << data[i] << " Passengers: " << passengers << " capacity : " << capacity << " busses: " << busses << endl;
			
			}
		
		busses++;
		
		cout << busses << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
