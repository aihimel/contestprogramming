#include <iostream>
#define IN cin

using namespace std;
int main(){
	
	int result, a, a1, a2, a3, b, b1, b2, b3, n;
	
	for(IN >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n; !IN.eof(); IN >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n){
		a = a1 + a2 + a3; b = b1 + b2 + b3;
		if(a % 5 == 0) result = a / 5;
			else result = a / 5 + 1;
		if(b % 10 == 0) result += b / 10;
			else result += b / 10 + 1;
		if(result <= n) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	return 0;	
}
