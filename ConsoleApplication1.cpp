//fstream has classes as ifstream and ofstream, for inputting(readind) data from a file and outputting(writting) data to a file.
//those classes have member function as read() and write(), for reading and writing to a file.

//using write() method saves the text in binary format.
//using read() get backs it in normal text format.


#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
	int roll;
	float marks;
	char name[35];
};

int main() {
	Student s1;
	ifstream file;
	file.open("student.txt");
	file.read((char*) & s1, sizeof(Student));
	cout << "Details: \n";
	cout << "Name: " << s1.name;
	cout << "Roll :" << s1.roll;
	cout << "Marks: " << s1.marks;
	file.close();
	return 0;
}