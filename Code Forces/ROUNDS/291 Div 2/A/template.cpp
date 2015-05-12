#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#define IN cin
#define INF -1

using namespace std;

//bool sort_logic(int i, int j);
//void pr(int data[], int length);
//int sum(int beg, int end, int data[]);
//vector <string> explode(string data, char delim);
//int factorial(int num);
//int maximum(vector <int> data, int beg, int end);
//int minimum(vector <int> data, int beg, int end);
//int fibonacci(int a, int b, int n);

// EOF Termination
int main(){
	
	long long num, length, i, temp;
	bool start;
	
	//~ ifstream input;
	//~ input.open("input.txt");
	 
	for(IN >> num; !IN.eof(); IN >> num){
		
		for(length = 0, temp = num; temp > 0; temp /= 10, length++);
		
		for(start = false, i = length - 1 ; i >= 0; i--){
			 
			if(i > 0) { temp = num / (long long) pow(10, i); num %= (long long) pow(10, i); }
				else temp = num;
							
			if( temp > 4){
				
				if( ( 9 - temp ) == 0 && start ) cout << 0;
					else if( 9 - temp > 0 ) { cout << 9 - temp; start = true; }
				
			} else { cout << temp ; start = true;}
			
		}
		
		if(start) cout << endl;
			else cout << 1 << endl;
		
	}
	// input.close();
	return 0;	
}

// Input Termination
/*
int main(){
	
	int __initial_input;
	
	for(cin >> __initial_input; __initial_input != 0; cin >> __initial_input){
		
		cout << "Initail Input ::" << __initial_input << endl;
		
		}
	
	return 0;
	
	}
*/

// Case Number
/*int main(){
	
	int __initial_input, __case_number;
	
	//ifstream input;
	//input.open("input.txt");
	
	for(IN >> __initial_input, __case_number = 1; __case_number <= __initial_input; __case_number++){
		
		cout << "Case #" << __case_number << endl;
		
		}
	
	//input.close();
	return 0;
	
	}
*/

/*
// Usage of sort function sort(data, data+n, sort_logic);
bool sort_logic(int i, int j){
	
	return i > j;
	
	}
*/

/*
void pr(int data[], int length){
	
	int i;
	for(i = 0; i< length; i++) cout << data[i] << " ";
	cout << endl;
	
	}
*/

/*
int sum(int beg, int end, int data[]){
	
	int result;
	int register i;
	
	for(i = beg, result = 0; i <= end; i++) result += data[i];
	
	return result;
	
	}
*/

/*
// Explode function like PHP.
vector <string> explode(string data, char delim){
	
	vector <string> result;
    string temp;
    
	int register i;
	
	for(i = 0, temp = ""; i < (signed) data.size(); i++){
		
		if(data.at(i) != delim){
			
			temp += data.at(i);
			//cout << temp << endl;
			} else {
				//cout << temp << endl;
				result.push_back(temp);
				temp = "";
				
				}

		}
	
	result.push_back(temp);

    return result;
	
	}
*/

/*
// Factorial Function
int factorial(int num){if(num != 0) return num * factorial(num-1); else return 1;}
*/

/*
int maximum(vector <int> data, int beg, int end){
	
	int max_index, mid;
	
	if(beg == end) return beg;
		else {
			mid = (beg + end) / 2;
			max_index = maximum(data, beg, mid);
			if( data.at(maximum(data, beg, mid)) < data.at(maximum(data, mid + 1, end)) ) return maximum(data, mid + 1,end);
				else return max_index;
	}
	
	return max_index;
}
*/

/*
int minimum(vector <int> data, int beg, int end){
	
	int min_index, mid;
	
	if(beg == end) return beg;
		else {
			mid = (beg + end) / 2;
			min_index = minimum(data, beg, mid);
			if( data.at(minimum(data, beg, mid)) > data.at(minimum(data, mid + 1, end)) ) return minimum(data, mid + 1,end);
				else return min_index;
	}
	
	return min_index;
}
*/

/*
// Fibonacci numbers
int fibonacci(int a, int b, int n){
	if(n == 1) return a;
		else if(n == 2) return b;
			else return fibonacci(a, b, n-1) + fibonacci(a, b, n-2);
}
*/
