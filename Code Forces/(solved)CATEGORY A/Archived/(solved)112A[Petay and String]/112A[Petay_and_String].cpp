#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;

//bool sort_logic(int i, int j);
//void pr(int data[], int length);

// EOF Termination
int main(){
	
	string one, two;
	int result;
	register unsigned int i;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> one >> two; !IN.eof(); IN >> one >> two){
		
		for(i = 0; i < one.size(); i++){
			
			one.at(i) = tolower(one.at(i));
			two.at(i) = tolower(two.at(i));
			
			}
			
		for(i = result = 0; i < one.size(); i++){
			
			if((int) one.at(i) > (int) two.at(i)){
				result = 1;
				break;
				} else if((int) one.at(i) < (int) two.at(i)){
					result = -1;
					break;
					}			
			}
		
		cout << result << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
