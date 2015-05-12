#include <iostream>
#define IN cin
#define INF -1

using namespace std;

int main(){
	
	int magnates, result, previous, current;
	int register i;
	
	for(IN >> magnates; !IN.eof(); IN >> magnates){
		for(result = 0, previous = current = INF, i = 0; i < magnates; i++){
			previous = current;
			IN >> current;
			if(current != previous) result++;
		}
		cout << result << endl;
	}
	
	return 0;
}
