#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int number, length = 14;
	bool lucky;
	int i;
	int lucky_numbers[] = {4,7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
		
	for(IN >> number; !IN.eof(); IN >> number){
		for(i = 0, lucky = false; i < length; i++){
			if(number == lucky_numbers[i] || number % lucky_numbers[i] == 0) lucky = true;
		}
		if(lucky) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	
	return 0;
	
	}
