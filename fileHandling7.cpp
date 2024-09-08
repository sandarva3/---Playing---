//Reading from a file through file opening mode
#include<iostream>
#include<fstream>
using namespace std;

void main() {
	fstream file;
	char c;
	file.open("abc.txt", ios::in);
	while (!file.eof()) {
		c = file.get();
		putchar(c);
	}
	file.close();

}