#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int m, n, result;
		
	for(IN >> m >> n; !IN.eof(); IN >> m >> n){
		for(result = 0; m != 0 && n != 0; m--, n--) result++;
		if(result % 2 == 0 ) cout << "Malvika" << endl;
			else cout << "Akshat" << endl;
	}
	return 0;	
}
