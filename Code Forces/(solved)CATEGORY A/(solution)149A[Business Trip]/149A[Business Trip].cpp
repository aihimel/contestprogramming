#include <iostream>
#include <algorithm>
#define IN cin

using namespace std;

bool sort_logic(int i, int j);

int main(){
	
	int height, temp, data[12], result, months;
	bool flag;
	int register i;
	
	for(IN >> height; !IN.eof(); IN >> height){
		for(i = 0; i < 12; i++){
			IN >> temp;
			data[i] = temp;
		}
		sort(data, data + 12, sort_logic);
		for(i = result = months = 0, flag = false; i <= 12; i++){
			if(result >= height){
				flag = true;
				break;
			} else if(i < 12){result += data[i]; months++;}
		}
		if(flag) cout << months << endl;
			else cout << -1 << endl;
	}
	return 0;	
}

bool sort_logic(int i, int j){return i > j;}
