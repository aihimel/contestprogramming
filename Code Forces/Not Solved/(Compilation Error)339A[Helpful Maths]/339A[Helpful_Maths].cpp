#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define IN cin

using namespace std;

bool sort_logic(int i, int j);
vector <string> explode(string data, char delim);

int main(){
	
	string data;
	vector <string> list;
	vector <int> numbers;
	
	for(IN >> data; !IN.eof(); IN >> data){
		
		list = explode(data, '+');
		
		for(vector <string> :: iterator it = list.begin(); it != list.end(); ++it){
			
			numbers.push_back(stoi(*it));
			
			}
		list.erase(list.begin(), list.end());
		sort(numbers.begin(), numbers.end(), sort_logic);
		
		for(vector <int> :: iterator it = numbers.begin(); it != numbers.end(); ++it) cout << *it << "+" ; 
		cout << "\b \b" << endl;
		numbers.erase(numbers.begin(), numbers.end());
		}
	
	
	return 0;
	
	}

vector <string> explode(string data, char delim){
	
	vector <string> result;
    string temp;
    int register i;
	for(i = 0, temp = ""; i < (signed) data.size(); i++){
		
		if(data.at(i) != delim){
			
			temp += data.at(i);
			} else {
				result.push_back(temp);
				temp = "";
				
				}

		}
	
	result.push_back(temp);

    return result;
	
	}

bool sort_logic(int i, int j){
	
	return i < j;
	
	}
