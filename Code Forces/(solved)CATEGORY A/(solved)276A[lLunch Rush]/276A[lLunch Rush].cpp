#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#define IN cin

using namespace std;

int main(){
	
	int long long n, f, t, k, index;
	int register i;
		
	for(IN >> n; !IN.eof(); IN >> n){
		
		IN >> k;
		
		int long long joy[n];
		
		for(i = 0; i < n; i++){
			
			IN >> f >> t;
			
			if(k >= t){
				
				joy[i] = f;
				
				} else joy[i] = f - ( t - k );
			
			}
		
		for(index = i = 0; i < n ; i++){
			
			if(joy[index] < joy[i]) index = i;
			
			}
		
		cout << joy[index] << endl;
		
		}

	return 0;
	
	}
