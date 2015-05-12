#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int teams, result;
	int register i, j;
	
	for(IN >> teams; !IN.eof(); IN >> teams){
		int data[teams][2];
		
		for(i = 0; i < teams; i++) IN >> data[i][0] >> data[i][1];
		
		for(i = result = 0; i < teams; i++){
			for(j = 0; j < teams; j++)
				if(data[i][0] == data[j][1]) result++;
		}
		cout << result << endl;
	}
	return 0;	
}
