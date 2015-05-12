#include <iostream>
#include <vector>
#include <fstream>
#define IN cin

using namespace std;

// EOF Termination
int main(){
	
	int __initial_input, i, j, k, most_difference_index, amount, temp, flag;
	vector <int> solution;
	
	for(IN >> __initial_input; !IN.eof(); IN >> __initial_input){
		
		int book_price[__initial_input];
		
		for(i = 0; i < __initial_input; i++){
			
			IN >> book_price[i];
			
			}
		
		IN >> amount;
		IN.get();

		k = 0;
		for(i = 0; i < __initial_input - 1; i++){
			
			for(j = i + 1; j < __initial_input; j++){
				
				if( ( book_price[i] + book_price[j] ) == amount ){
					
					solution.at(k) = book_price[i];
					solution.at(++k) = book_price[j];
					
					temp = book_price[i] - book_price[j];
					if (temp < 0) temp *= -1;
					solution.at(++k) = temp;
					
					}
				
				}
			
			}
		
		for(flag = 0, most_difference_index = 2, i = 2; i <= k; i += 3){
			
			if(solution.at(i) < solution.at(i+3)){
				
				most_difference_index = i+3;
				flag++;
				
				} 
			
			}
			
		cout << "Peter should buy books whose prices are " << solution.at(i-2) << " and " << solution.at(i-1) << "." << endl;
		
		}
	
	return 0;
	
	}
