#include <iostream>
#include <string>
//#include <algorithm>
//#include <fstream>
#define IN cin

using namespace std;


// EOF Termination
int main(){
	
	string word;
	int size;
	register int i;
	bool applicable;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> word, applicable = false; !IN.eof(); IN >> word, applicable = false){
		
		size = word.size();
		
		if(size == 1){
			if((int)word.at(0) >= 97) word.at(0) = toupper(word.at(0));
				else word.at(0) = tolower(word.at(0));
			} else{
		
				// All uppercase
				for(i = 0; i < size; i++){
			
					if((int)word.at(i) < 97) applicable = true;
						else {applicable = false;break;}
			
					}
		
				if(applicable){
			
					for(i = 0; i < size; i++){
				
						word.at(i) = tolower(word.at(i));
				
						}
			
					applicable = false;
			
					}
		
		
				if(!applicable && (int)word.at(0) >= 97){
			
					for(i = 1; i < size; i++){
				
						if((int)word.at(i) < 97) applicable = true;
							else {applicable = false; break;}
						}	
			
					}
		
				if(applicable){
			
					word.at(0) = toupper(word.at(0));
			
					for(i = 1; i < size; i++){
				
						word.at(i) = tolower(word.at(i));
				
						}
			
					}
			}
		
		cout << word << endl;
		
		}
	
	//input.close();
	
	return 0;
	
	}
