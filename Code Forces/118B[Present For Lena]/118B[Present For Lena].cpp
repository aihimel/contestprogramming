#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int num;
	int register i, j, k;
		
	for(IN >> num; !IN.eof(); IN >> num){
		for(i = 0; i <= num; i++){
			for(j = num - i; j >= 0; j--) for(k = 0; k < j; k++) cout << " ";
			for(j = i ; j >= 0; j--) cout << j << " ";
			cout << endl;
		}

		for(i = num - 1; i >= 0; i--){
			for(j = num - i; j >= 0; j--) for(k = 0; k < j; k++) cout << " ";
			for(j = 0; j < i; j++) cout << j << " ";
			for(j = i ; j >= 0; j--) cout << j << " ";
			cout << endl;
		}
	}
	return 0;	
}
