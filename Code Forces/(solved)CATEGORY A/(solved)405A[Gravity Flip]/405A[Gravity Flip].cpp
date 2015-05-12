#include <iostream>
#include <algorithm>
#define IN cin

using namespace std;

bool sort_logic(int i, int j);
void pr(int data[], int length);

int main(){
	
	int length;
	int register i;
		
	for(IN >> length; !IN.eof(); IN >> length){
		int data[length];
		for(i = 0; i < length; i++) IN >> data[i];
		sort(data, data + length, sort_logic);
		pr(data, length);
	}
	return 0;	
}

bool sort_logic(int i, int j){
	return i < j;
}
void pr(int data[], int length){
	int i;
	for(i = 0; i< length; i++) cout << data[i] << " ";
	cout << endl;
}
