#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string s, t;
	int unsigned i, j;
	bool flag;
	
	for(IN >> s >> t; !IN.eof(); IN >> s >> t){
		if(s.size() == 1){
			if(s.at(0) != t.at(0)) cout << "NO" << endl;
				else cout << "YES" << endl;
			continue;
		}
		for(i = s.size()-1, j = 0, flag = true; i > 0 && flag; --i, ++j){
			if(s.at(i) != t.at(j)) flag = false;
		}
		if(flag) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	
	return 0;
	
}
