//Reading until EOF

#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream file;
	char ch;
	file.open("abc.txt");
	cout << "ALL characters from file: " << endl;
	while(!file.eof()) {
		file.get(ch); //get a char at a time.
		cout.put(ch); //cout << ch; OR putchar(ch);
	}
	return 0;
}