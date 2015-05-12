#include <iostream>
#define IN cin

using namespace std;

int main(){
	
	int h, m, cashes, max_cashes, customers, _time, _previous_time;
	int register i;
	
	for(IN >> customers; !IN.eof(); IN >> customers){
		_time = _previous_time = 0;
		for(i = 0 , cashes = max_cashes = 1; i < customers; i++){
			IN >> h >> m;
			_previous_time = _time;
			_time = h * 60 + m;
			if(i != 0 && _time == _previous_time) cashes++;
				else {
					max_cashes = cashes > max_cashes ? cashes : max_cashes;
					cashes = 1; 
				}
			//cout << _previous_time << " " << _time << " " << cashes << " " << max_cashes << endl;
		}
		max_cashes = cashes > max_cashes ? cashes : max_cashes;
		cout << max_cashes << endl;
	}
	return 0;	
}
