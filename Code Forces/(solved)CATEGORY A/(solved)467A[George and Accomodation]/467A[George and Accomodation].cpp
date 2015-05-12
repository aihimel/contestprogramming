#include <iostream>
#define IN cin
#define INF -1

using namespace std;

int main(){
	
	int room, p, q, result;
	int register i;
	
	for(IN >> room; !IN.eof(); IN >> room){
		for(i = result = 0; i < room; i++){
			IN >> p >> q;
			if( (q-p) >= 2) result++;
		}
		cout << result << endl;
	}

	return 0;
	
	}
