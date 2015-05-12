#include <iostream>
#define IN cin

using namespace std;
int main(){
	
	int long long n, k, result;
	
	for(IN >> n >> k; !IN.eof(); IN >> n >> k){
		if(n % 2 == 0){
			if(k > n/2){
				k -= n/2;
				result = k * 2 ;
			} else result = k * 2 - 1;
		} else {
			if(k == ( n / 2 + 1 )) result = n;
				else if( k <= n/2) result = (k * 2 -1);
					else {
						k -= (n/2+1);
						result = k * 2;
					}
		}
		cout << result << endl;
	}
	return 0;	
}
