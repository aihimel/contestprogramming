#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int n, m, result, extra, excess;
		
	for(IN >> n >> m; !IN.eof(); IN >> n >> m){
		
		for(result = n, extra = n/m, excess = n % m; extra > 0; ){
			result += extra;
			excess += extra % m;
			extra /= m;
			if(excess >= m){
				extra += excess / m;
				excess %= m;
			}
		}
		
		cout << result << endl;
		
		}
	
	return 0;
	
	}
