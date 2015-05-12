#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string str, word = "hello";
	bool flag;
	int i, j;
	
	for(IN >> str; !IN.eof(); IN >> str){
		for(i = 0 , flag = true; (unsigned)i < word.size();){
			for(j = i; (unsigned) j < str.size() && (unsigned) i < word.size(); j++){
				if(word.at(i) == str.at(j)){
					i++;
				}
			}
			if((unsigned) i <= word.size()-1){
				flag = false;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
		
	return 0;
	
	}
