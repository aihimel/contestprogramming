#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string data, word;
	int register unsigned i;
	
	for(IN >> data; !IN.eof(); IN >> data){
		word = "";
		for(i = 0; i < data.size(); i++){
			if(i+2 < data.size() && data.at(i) == 'W' && data.at(i+1) == 'U' && data.at(i+2) == 'B'){
				if(word.size() > 0){
					cout << word << " ";
					word = "";
				}
				i += 2;
			} else{
				word += data.at(i);
			}
		}
		cout << word << endl;
	}
	return 0;	
}
