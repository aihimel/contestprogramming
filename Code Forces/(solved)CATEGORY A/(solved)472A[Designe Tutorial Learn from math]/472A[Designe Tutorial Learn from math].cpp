#include <iostream>
#define IN cin

using namespace std;

bool composite_number(int long);

int main(){
	
	int long number;
	int long i;
	
	for(IN >> number; !IN.eof(); IN >> number){
		for(i = 4; i < number - 4; i++){
			if(composite_number(i) && composite_number(number-i)){
				cout << i << " " << number - i << endl;
				break;
			}
		}
	}
	
	return 0;
	
	}

bool composite_number(int long num){
	int long i;
	for(i = 2; i <= num/2 ; i++){
		if(num % i == 0) return true;
	}
	return false;
}
