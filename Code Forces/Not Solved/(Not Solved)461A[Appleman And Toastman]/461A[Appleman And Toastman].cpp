#include <iostream>
#include <algorithm>
#include <vector>
#define IN cin

using namespace std;

bool sort_logic(int i, int j);
int long long sum(vector <int > data, int beg, int end);

int main(){
	
	int length, temp;
	int long long result;
	int register i;
	
	for(IN >> length; !IN.eof(); IN >> length){
		vector <int> data(length, 0);
		for(i = result = 0; i < length; i++){
			IN >> temp;
			data.at(i) = temp;
			//result += temp;
		}
		if(length > 2) cout << sum(data, 0, data.size()-1) << endl;
			else if(length == 2) cout << data.at(0) + data.at(1) << endl;
				else cout << data.at(0) << endl;
	}
	return 0;	
}

int long long sum(vector <int> data, int beg, int end){
	if(beg == end) return data.at(beg);
		else {
			int mid = (beg + end) / 2;
			int long long result = sum(data, beg, mid) + sum(data, mid+1, end);
			return result * 2;	
		}
}

bool sort_logic(int i, int j){ return i > j; }
