#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int i = 0, j;
	char c;
	
	//freopen("input/6", "r", stdin);
	//freopen("output/6", "w", stdout);
	
	ifstream fs("input/6");
	ofstream ofs("output/6");
	
	//c = char
	do {
		fs.get(c);
		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
			printf("%c", c);
		} 		
	} while (!fs.eof());		
}
