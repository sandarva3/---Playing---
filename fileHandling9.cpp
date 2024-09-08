//Input 'n' number of students details and write them into a file.
//Read from a file and only display the details of students whose address is 'Chitwan'.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student {
	char name[35];
	float marks;
public:
	char address[40];//Set address as public data member to easily read its value.
	void set() {
		cout << "Enter name, marks, address: ";
		cin >> name >> marks >> address;
	}
	void get() {
		cout << "Name: " << name << ", marks: " << marks << ", address: " << address << endl;
	}
};

int main() {
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	Student* stu = new Student[n]; //Dynamically allocate memory for 'n' number of students. 'stu' is a pointer variable here.
	fstream file;
	file.open("abc.txt", ios::out);

	if(!file){
		coutt << "The given file name not opened";
	}

	//WRITE
	for (int i = 0; i < n; i++) {
		stu[i].set();
		file.write((char*)&stu[i], sizeof(Student));
	}
	file.close();


	//READ
	//Details of student whose address is 'Chitwan'
	file.open("abc.txt", ios::in);
	if(!file){
		cout << "The given file name not opened";
	}
	for (int i = 0; i < n; i++) {
		file.read((char*)&stu[i], sizeof(Student));
		if (strcmp(stu[i].address, "Chitwan") == 0) {
			stu[i].get();
		}
	}
	file.close();

	return 0;
}