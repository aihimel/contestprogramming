#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

int main(){
	
	int year, next_year, data[4];
	
	bool flag;
	
	int register i, j;
	
	for(IN >> year; !IN.eof(); IN >> year){
		
		for(next_year = year+1; true; next_year++){
			
			int cpy_year = next_year;
			
			data[0] = cpy_year/1000; cpy_year %= 1000;
			data[1] = cpy_year/100; cpy_year %= 100;
			data[2] = cpy_year/10; cpy_year %= 10;
			data[3] = cpy_year;
			
			for(flag = true, i = 0; i < 3; i++){
				
				for(j = i+1; j < 4; j++){
					
					if(data[i] == data[j]) flag = false;
					
					}
				
				}
			
			if(flag) break;
			
			}
		
		cout << next_year << endl;
		
		}
	
	return 0;
	
	}
