#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int long long n, result;
	
	for(IN >> n; !IN.eof(); IN >> n){
		if(n % 2 == 0) result = n / 2;
			else result = -(n/2 + 1);
		
		cout << result << endl;
	}
	return 0;	
}
