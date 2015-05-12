#include <iostream>
#define IN cin

using namespace std;

int difference(int, int);

int main(){
	
	int soldiers, index, result, temp;
	int register i;
	
	for(IN >> soldiers; !IN.eof(); IN >> soldiers){
		int data[soldiers];
		for(i = 0; i < soldiers; i++){
			IN >> data[i];
		}
		
		// Finding the maximum
		for(i = index = result = 0; i < soldiers; i++){
			if(data[i] > data[index]){
				index = i;
			}
		}
		
		for(i = index; i > 0; i--){
			temp = data[i];
			data[i] = data[i-1];
			data[i-1] = temp;
		}
		
		result += difference(index, 0);
		
		for(i = index = 0; i < soldiers; i++){
			if(data[i] <= data[index]){
				index = i;
			}
		}
		result += difference(soldiers-1, index);
		cout << result << endl;
	}
	
	return 0;
	
	}

int difference(int a, int b){
	int result = a - b;
	if(a < 0) a *= -1;
	return result;
}
