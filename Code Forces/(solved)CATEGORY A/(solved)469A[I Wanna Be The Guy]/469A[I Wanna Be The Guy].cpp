#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int n, p, temp;
	int register i;
	bool flag;
	
	for(IN >> n; !IN.eof(); IN >> n){
		int data[n+1];
		for(i = 0; i <= n; i++) data[i] = 0;
		IN >> p;
		for(i = 1; i <= p; i++){
			IN >> temp;
			data[temp] = 1;
		}
		IN >> p;
		for(i = 1; i <= p; i++){
			IN >> temp;
			data[temp] = 1;
		}
		for(i = 1, flag = true; i <= n; i++){
			if(data[i] == 0){
				flag = false; break;
			}
		}
		if(flag) cout << "I become the guy." << endl;
			else cout << "Oh, my keyboard!" << endl;
	}
	return 0;	
}
