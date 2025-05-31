//Ask details, save that info to file. Later read those info from that file and display them.
#include<iostream>
#include<fstream>
using namespace std;

class Student {
	int roll;
	float marks;
	char name[40];
	int age;
public:
	void set();
	void get();
};

void Student::set() {
	cout << "Enter Name, Age, Roll, Marks: ";
	cin >> name >> age >> roll >> marks;
}

void Student::get() {
	cout << "Name: " << name << ", Age: " << age << ", Roll: " << roll << ", Marks: " << marks << endl;
}

void main() {
	Student stu[3];
	ofstream file;
	file.open("abc.txt");

	//WRITE
	for (int i = 0; i < 3; i++) {
		stu[i].set();
		file.write((char*)&stu[i], sizeof(Student));
	}
	cout << endl << "Details has been written to file" << endl;
	file.close();

	//READ
	cout << "Reading data from file: " << endl;
	ifstream file1;
	for (int i = 0; i < 3; i++) {
		file1.read((char*)&stu[i], sizeof(Student));
		stu[i].get();
	}
}