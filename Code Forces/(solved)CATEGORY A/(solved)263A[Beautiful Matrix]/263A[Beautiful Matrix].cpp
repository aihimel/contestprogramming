#include <iostream>
#define IN cin

using namespace std;

int difference(int, int);

int main(){
	
	int __initial_input, data[5][5], position[2], length = 5;
	int register i, j;
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		for(i = 0; i < length; i++){
			for(j = 0; j < length; j++){
				if(i == 0 && j == 0) data[i][j] = __initial_input;
					else IN >> data[i][j];
			}
		}
		
		//Outputting the array.
		/*for(i = 0; i < length; i++){
			for(j = 0; j < length; j++) cout << data[i][j] << " ";
			cout << endl;
		}*/
		
		// Finding the posithion of 1
		for(i = position[0] = position[1] = 0; i < length; i++){
			for(j = 0; j < length; j++){
				if(data[i][j] == 1){
					position[0] = i;
					position[1] = j;
					break;
				}
			}
		}
		//cout << position[0] << " " << " " << position[1] << " ";
		cout << difference(position[0], 2) + difference(position[1], 2) << endl;
		
	}
		
	return 0;
	
}

int difference(int a, int b){
	int result = a - b;
	if(result < 0) result *= -1;
	return result;
	}
