#include <iostream>
#include <string>
//#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int size;
	register int i;
	string data;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> data; !IN.eof(); IN >> data){
		
		size = data.size();
		
		for(i = 0; i < size; i++){
			
			if( (int) data.at(i) <= 96 ) data.at(i) = (char) (data.at(i)+32);
			
			}
		
		for(i = 0; (unsigned)i < data.size(); i++){
			
			register char ch = data.at(i);
			
			bool vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
			
			if(vowel) {
				
				data.erase(i,1);
				i--;
				
				}
			}
		
		size = data.size();
		
		for(i=0; i < size; i++) cout << "." << data.at(i);
		
		cout << endl;
		}
	
	//input.close();
	
	return 0;
	
	}
