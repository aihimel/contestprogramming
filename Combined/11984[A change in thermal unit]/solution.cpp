#include <iostream>
#include <string>
#include <fstream>
#define IN cin

using namespace std;


// Case Number
int main(){
	
	int __initial_input, __case_number;
	
	float cel, fer;
	
	//ifstream input;
	//input.open("input.txt");
	
	
	for(IN >> __initial_input, __case_number = 1; __case_number <= __initial_input; __case_number++){
		
		IN >> cel >> fer;
		
		fer += ( ( cel * 9 ) / 5) + 32;
		
		cel = ( ( fer - 32 ) * 5 ) / 9;
		
		cout << "Case " << __case_number << ": " ;
		printf("%.2f", cel); cout << endl;
		
		}
		
	//input.close();
	
	return 0;
	
	}

