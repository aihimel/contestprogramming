#include <iostream>
#include <algorithm>
#include <list>
#define IN cin

using namespace std;

int main(){
	
	int data[6];
	vector < vector <int> > list;
	int register unsigned i, j;
	bool flag;
	
	for(IN >> data[0] >> data[1] >> data[2] >> data[3] >> data[4] >> data[5]; !IN.eof(); IN >> data[0] >> data[1] >> data[2] >> data[3] >> data[4] >> data[5]){
		for(i = 0; i < 6; i++){
			if(list.size() > 0){
				for(j = 0, flag = true; j < list.size(); j++){
					if(data[i] == list.at(j).at(0)){
						list.at(j).at(1)++; flag = false; break;
					}
				}
				if(flag) {list.at(j+1).at(0) = data[i]; list.at(j+1).at(1) = 1;}
			}else{
				list.at(0).at(0) = data[i];
				list.at(0).at(1) = 1;
			}
		}
		if(list.size() > 3) cout << "Alien" << endl;
			else if(list.size() == 2) cout << "Bear" << endl;
				else cout << "Elephant" << endl;
	}
	return 0;	
}
