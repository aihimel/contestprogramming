#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	string guest, host, stacked;
	int register unsigned i, j;
	for(IN >> guest >> host >> stacked; !IN.eof(); IN >> guest >> host >> stacked){
		
		for(i = 0; i < guest.size(); i++){
			for(j = 0; j < stacked.size(); j++){
				if(guest.at(i) == stacked.at(j)){
					guest.erase(i, 1); stacked.erase(j, 1);
					i--;break;
				}
			}
		}
		
		for(i = 0; i < host.size(); i++){
			for(j = 0; j < stacked.size(); j++){
				if(host.at(i) == stacked.at(j)){
					host.erase(i, 1); stacked.erase(j, 1);
					i--;break;
				}
			}
		}
		
		if(!guest.size() && !host.size() && !stacked.size()) cout << "YES" << endl;
			else cout << "NO" << endl;
		
	}
	return 0;	
}
