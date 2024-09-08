//Reading and writing class object to a file through file opening mode.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student {
	int age, roll;
	char name[40];
	float marks;
public:
	void set() {
		cout << "Enter Name, age, marks, roll: ";
		cin >> name >> age >> marks >> roll;
	}
	void get() {
		cout << "Name: " << name << ", Age: "<< age << ", Marks: "<< marks << ", Roll:" << roll << endl;
	}
};

void main() {
	Student s1, s2;
	fstream file;
	char c;
	file.open("abc.txt", ios::out);
	s1.set();
	file.write((char*)&s1, sizeof(Student));
	cout << "Details has been written. ";
	file.close();
	
	file.open("abc.txt", ios::in);
	file.read((char*)&s2, sizeof(Student));
	file.close();
	s2.get();
}