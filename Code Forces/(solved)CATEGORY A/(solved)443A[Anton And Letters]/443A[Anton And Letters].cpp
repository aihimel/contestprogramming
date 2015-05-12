#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string data, characters;
	bool flag;
	
	int unsigned register i, j;
	
	for(getline(IN, data); !IN.eof(); getline(IN, data)){
		characters = "";
		for(i = 1; i < data.size() - 1; i += 3){
			for(j = 0, flag = true; j < characters.size(); j++){
				if(data.at(i) == characters.at(j)){flag = false; break;}
			}
			if(flag) characters += data.at(i);
		}
		cout << characters.size() << endl;
	}
	return 0;	
}
