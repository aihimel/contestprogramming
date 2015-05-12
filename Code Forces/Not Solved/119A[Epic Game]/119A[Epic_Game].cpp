#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN input

using namespace std;

int gcd(int x, int y);

// EOF Termination
int main(){
	
	int n, m, k, result;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> n >> m >> k; !IN.eof(); IN >>  n >> m >> k){
		
		for(result = 0; k >= gcd(n,k);){
			cout << "OK" << endl;
			k -= gcd(n,k);
			result = 0;
			
			if(k >= gcd(m,k)){
				
				k -= gcd(m,k);
				result = 1;
				
				}	
			
			}
		
		cout << result << endl;
		
		}
	
	input.close();
	
	return 0;
	
	}

int gcd(int x, int y){
	
	int min;
	int register i;
	
	if(x > y) min = y;
		else if (x < y) min = x;
			else min = x;
		
	for(i = min; i > 0; i--){
			
		if(x%i == 0  && y%i == 0){
				
			return i;
				
			}
			
		}
		
	
	return 0;
	}
