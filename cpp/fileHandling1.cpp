//Reading a first given number of characters from file using getline() function

#include<iostream>
#include<fstream>
using namespace std;


int main() {
	ifstream file;
	file.open("abc.txt");

	char str[90];
	file.getline(str, 89); //saving the first 89 chars into str

	cout << "THe first 89 charactes from file is: " << str;
	file.close();

	return 0;
}

