#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string data, keyboard;
	char movement;
	
	keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
	
	int unsigned i, j;
	
	for(IN >> movement >> data; !IN.eof(); IN >> movement >> data){
		for(i = 0; i < data.size(); i++){
			for(j = 0; j < keyboard.size(); j++){
				if(data.at(i) == keyboard.at(j)){
					if(movement == 'R'){
						if(j != 0 && j != 10 && j != 20) {data.at(i) = keyboard.at(j - 1);break;}
					} else {
						if(j != 9 && j != 19 && j != 29) {data.at(i) = keyboard.at(j + 1);break;}
					}
				}
			}
		}
		cout << data << endl;
	}
	return 0;	
}
