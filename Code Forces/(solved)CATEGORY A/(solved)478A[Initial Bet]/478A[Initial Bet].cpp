#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int c1, c2, c3, c4, c5, result;
		
	for(IN >> c1 >> c2 >> c3 >> c4 >> c5; !IN.eof(); IN >> c1 >> c2 >> c3 >> c4 >> c5){
		result = c1 + c2 + c3 + c4 + c5;
		if(result > 0 && result % 5 == 0) cout << result/5 << endl;
			else cout << -1 << endl;
	}
	return 0;	
}
