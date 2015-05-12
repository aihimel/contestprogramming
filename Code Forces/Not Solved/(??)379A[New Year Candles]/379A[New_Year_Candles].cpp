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
	
	int a, b, last_val, result, excess;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> a; !IN.eof(); IN >> a){
		
		IN >> b;
		
		last_val = a;
		
		for (result = a, excess = 0; (last_val + excess) >= b; ){
			
			result += last_val / b;
			excess += last_val % b;
			
			if(excess >= b){
				
				result += excess / b;
				excess %= b;
				
				}
				
			last_val /= b;
			
			cout << result << " " << last_val << " " << excess << " " << endl;
			
			}
		
		cout << result << endl;
		
		}
	
	input.close();
	
	return 0;
	
	}
