#include <iostream>
#include <algorithm>
#include <vector>
#define IN cin

using namespace std;

bool sort_logic(int i, int j);

int main(){
	
	int length, temp;
	int long long result;
	int register i, j;
	
	for(IN >> length; !IN.eof(); IN >> length){
		vector <int> data(length, 0);
		for(i = result = 0; i < length; i++){
			IN >> temp;
			data.at(i) = temp;
			result += temp;
		}
		sort(data.begin(), data.end(), sort_logic);
		for(i = length; i >= 2 && length > 2; i--){
			for(j = 0; j < i; j++) result += data.at(j);
		}
		cout << result << endl;
	}
	return 0;	
}

bool sort_logic(int i, int j){ return i > j; }
