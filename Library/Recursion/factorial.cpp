#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#define IN input
#define O cout
#define INF -1

using namespace std;

void convert(int num, int base);

int main(){
	
	int num, base;
	
	ifstream input;
	input.open("input.txt");
	
	for(IN >> num >> base; !IN.eof(); IN >> num >> base){
		//convert(num, base);
	}
	input.close();
	return 0;	
}

class nQueensPuzzle{
public:
	nQueensPuzzle(int queens = 8);
	bool canPlaceQueen(int k, int i);
	void queensConfiguration(int k);
	void printConfiguration();
	int solutionsCount();
private:
	int noOfSolutions, noOfQueens, *queensInRow;
};

nQueensPuzzle::nQueensPuzzle(int queens){
	noOfQueens = queens;
	queensInRow = new int[noOfQueens];
	noOfSolutions = 0;
}

bool nQueensPuzzle::canPlaceQueen(int i, int k){
	for(int j = 0; j < k; j++){
		if( (queensInRow[j] == i) || ( abs(queensInRow[j] - i) == abs(j - k) ) ) return false;
	}
	return true;
}

void nQueensPuzzle::queensConfiguration(int k){
	for(int i = 0; i < noOfQueens; i++){
		if(canPlaceQueen(k, i)){
			queensInRow[k] = i;
			if(k == noOfQueens - 1) printConfiguration();
				else queensConfiguration(k+1);
		}
	}
}
