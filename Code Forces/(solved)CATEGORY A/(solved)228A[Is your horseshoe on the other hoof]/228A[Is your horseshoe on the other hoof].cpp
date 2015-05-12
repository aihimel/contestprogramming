#include <iostream>
#define IN cin
#define INF -1

using namespace std;

int main(){
	
	int long data[4];
	int result;
	int register i, j;
	
	for(IN >> data[0] >> data[1] >> data[2] >> data[3]; !IN.eof(); IN >> data[0] >> data[1] >> data[2] >> data[3]){
		for(i = result = 0; i < 4-1 ; i++){
			for(j = i+1; j < 4 && data[i] != INF; j++){
				if(data[i] == data[j]){
					data[j] = INF;result++;
					}
			}
			if(result > 2) break;
		}
		cout << result << endl;
	}
	
	return 0;
	
	}
