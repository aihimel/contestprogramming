#include <iostream>
#include <string>
#define IN cin

using namespace std;

int main(){
	
	int force, x, y, z, temp_x, temp_y, temp_z;
	int register i;
		
	for(IN >> force; !IN.eof(); IN >> force){
		for(i = x = y = z = 0; i < force; i++){
			IN >> temp_x >> temp_y >> temp_z;
			x += temp_x;
			y += temp_y;
			z += temp_z;
		}
		if(!x && !y && !z) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	return 0;	
}
