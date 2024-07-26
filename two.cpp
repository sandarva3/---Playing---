#include<iostream>
#include<string.h>
using namespace std;

class Student {
protected:
    string name;
    int age;
public:
    void set1() {
        cout << "Enter name and age of st:";
        cin >> name >> age;
    }
    void get1() {
        cout << "Name: " << name << " Age: " << age;
    }
};

class Boarder: public Student{
protected:
    int roomNo;
public:
    void set2() {
        cout << "Enter Room: ";
        cin >> roomNo;
    }
    void get2() {
        cout << "RoomNO: " << roomNo;
    }
};

class dayScholar : public Student {
protected:
    string address;
public:
    void set3() {
        cout << "Enter address: ";
        cin >> address;
    }
    void get3() {
        cout << "address: " << address;
    }
};

