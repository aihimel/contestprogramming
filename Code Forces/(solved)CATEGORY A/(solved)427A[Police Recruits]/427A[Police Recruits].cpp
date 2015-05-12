#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int events, event, policeman, crime;
	int register i;

	for(IN >> events; !IN.eof(); IN >> events){
		for(i = policeman = crime = 0; i < events; i++){
			IN >> event;
			if(event == -1)
				if(policeman > 0) policeman--;
					else crime++;
				else policeman += event;
		}
		cout << crime << endl;
	}
	return 0;	
}
