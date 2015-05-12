#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int a, b, c, data[7], max;	
	int register i;
	
	for(IN >> a >> b >> c; !IN.eof(); IN >> a >> b >> c){
		data[0] = a + b + c;
		data[1] = a * b * c;
		data[2] = a + ( b * c );
		data[3] = a * ( b + c);
		data[4] = ( a + b ) * c;
		data[5] = ( a * b ) + c;
		data[6] = ( a * c ) + b;
		//data[7] = ( a + c ) * b;
		for(i = max = 0; i < 7; i++) max = data[max] < data[i] ? i : max;
		cout << data[max] << endl;
	}
	return 0;	
}
