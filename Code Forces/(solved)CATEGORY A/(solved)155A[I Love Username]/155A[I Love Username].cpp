#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int contest, result;
	int register i, j;
	bool max, min;
	
	for(IN >> contest; !IN.eof(); IN >> contest){
		int data[contest];
		for(i = 0; i < contest; i++) IN >> data[i];
		for(max = true, i = 1, result = 0; i < contest; i++){
			for(j = 0, max = true; j < i; j++){
				if(data[i] <= data[j]) max = false; // max cheack
			}
			if(max) result++;
		}
		for(min = true, i = 1; i < contest; i++){
			for(j = 0, min = true; j < i; j++){
				if(data[i] >= data[j]) min = false; // min cheack
			}
			if(min) result++;
		}
		
		cout << result << endl;
	}
	return 0;	
}
