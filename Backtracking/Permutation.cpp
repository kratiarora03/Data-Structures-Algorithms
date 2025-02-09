#include <iostream>
using namespace std;


void printPermutation(string &str, int index) {
	//base case
	if(index >= str.length() ) {
		cout << str << " ";
		return;
	}

	for(int j = index; j<str.length(); j++) {
		swap(str[index], str[j]);
		//recursion bhaiya
		printPermutation(str, index+1);
		//backtracking
		swap(str[index], str[j]);
	}
	
}
