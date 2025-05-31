//fstream has classes as ifstream and ofstream, for inputting(readind) data from a file and outputting(writting) data to a file.
//those classes have member function as read() and write(), for reading and writing to a file.


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
	cout << "Enter Name, roll, and marks: ";
	cin >> s1.name >> s1.roll >> s1.marks;
	ofstream file;
	file.open("student.txt");
	file.write((char*) & s1, sizeof(Student));
	cout << " \n Details has been written to student.txt";
	file.close();
	return 0;
}